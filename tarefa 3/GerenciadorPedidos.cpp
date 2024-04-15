#include "GerenciadorPedidos.h"

    GerenciadorPedidos::GerenciadorPedidos (Pedido* pedido)
    {
        this->pedido = pedido;
    }

    void GerenciadorPedidos::checarTransporteNecessario ()
    {
        pesoVeiculos = 0;

        for (list<Veiculo>::iterator it = pedido -> getVeiculos() -> getLista() -> begin(); it != pedido -> getVeiculos() -> getLista() -> end(); it++)
        {
            if (it -> getPeso() == 0)
                cout << "Um dos veiculos nao possui peso definido\n";

            pesoVeiculos += it -> getPeso();
        }
        cout << "E necessario um caminhao capaz de transportar ao menos " << pesoVeiculos << "kgs\n";
    }