#include <iostream>
#include <iomanip>
#include "Clientes.h"
#include "Veiculos.h"

using namespace std;

class Pedido {

private:
    int numeroDoPedido;
    Cliente* pessoa;
    Veiculo* veiculo;
    string localDeColeta;
    string localDeEntrega;
    int pesoDaCarga;
    int volumeDaCarga;

    public:
        Pedido (int numero, Cliente* pessoa, Veiculo* veiculo, string coleta, string entrega, int peso, int volume);

        int setNumeroDoPedido (int numeroDoPedido);
        int setPessoa (Cliente* pessoa);
        int setVeiculo (Veiculo* veiculo);
        int setLocalDeColeta (string localDeColeta);
        int setLocalDeEntrega (string localDeEntrega);
        int setPesoDaCarga (int pesoDaCarga);
        int setVolumeDaCarga (int volumeDaCarga);

        int getNumeroDoPedido ();
        Cliente* getPessoa ();
        Veiculo* getVeiculo ();
        string getLocalDeColeta ();
        string getLocalDeEntrega ();
        int getPesoDaCarga ();
        int getVolumeDaCarga ();

        void mostrarPedido ();
};
