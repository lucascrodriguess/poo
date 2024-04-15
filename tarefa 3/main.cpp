#include "Veiculo.cpp"
#include "Carro.cpp"
#include "Cliente.cpp"
#include "Pedido.cpp"
#include "GerenciadorVeiculos.cpp"
#include "GerenciadorPedidos.cpp"
#include "Caminhao.cpp"
#include <iostream>
#include <list>

using namespace std;

int main (){

    Veiculo* mercedes = new Veiculo ("Carro", "Mercedes", 4000, 2012, 12345678, 5000, 12.3432, 13.432343);
    Carro* bw = new Carro ("BW");

    Cliente* cliente = new Cliente ("Junior", 12345678, 999554422, "Rua", "cliente@email.com");
    Pedido* pedido1 = new Pedido (cliente, 14.4285, 16.34578, 12.123123, 12.23414);

    pedido1 -> setVeiculo (mercedes);
    pedido1 -> setVeiculo (bw);

    GerenciadorPedidos* gerenciador = new GerenciadorPedidos (pedido1);

    gerenciador -> checarTransporteNecessario();

    return 0;
}