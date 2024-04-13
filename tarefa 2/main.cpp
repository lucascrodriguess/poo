#include "Veiculos.cpp"
#include "Onibus.cpp"
#include "Clientes.cpp"
#include "Pedidos.cpp"
#include "GerenciadorVeiculos.cpp"
#include <iostream>
#include <list>

using namespace std;

int main (){

    Veiculo* mercedes = new Veiculo ("Onibus", "Mercedes", 23, 32, 324, 433, "AA");
    Onibus* bw = new Onibus ("BW");

    GerenciadorVeiculos gerenciador = GerenciadorVeiculos();

    gerenciador.adicionarVeiculo (mercedes);
    gerenciador.adicionarVeiculo (bw);

    gerenciador.mostrarVeiculos ();

    return 0;
}