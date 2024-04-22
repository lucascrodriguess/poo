#include <iostream>
#include "veiculos.cpp"
#include "clientes.cpp"
#include "pedidos.cpp"

int main (){

    Veiculo* uno = new Veiculo ("Carro", "Uno", 200, 2000, 2353124, 1000, "Alegrete, RS");

    Cliente* fulano = new Cliente ("Fulano", 123456789, 123456789, "Santos Dumont", "fulano123@email.com");

    Pedido n01 = Pedido (0001, fulano, uno, "Porto Alegre, RS", "Alegrete, RS", uno->getPeso(), 12345);

    n01.mostrarPedido();

    return 0;
}