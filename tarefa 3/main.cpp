#include "Veiculo.cpp"
#include "Carro.cpp"
#include "Cliente.cpp"
#include "Pedido.cpp"
#include "GerenciadorVeiculos.cpp"
#include "Roteirizacao.cpp"
#include "Caminhao.cpp"
#include <iostream>
#include <list>

int main (){

    Veiculo* mercedes = new Veiculo ("Carro", "Mercedes", 0, 2012, 0, 1000, -29.784653953577582, -55.78595963828802);
    Carro* bmw = new Carro ("BMW", 0, 2018, 0, 1200, -30.263409106400783, -54.931307378969436);
    Carro* citroen = new Carro ("Citroen", 0, 2008, 0, 900, -29.772697697955927, -57.073863311292634);

    GerenciadorVeiculos* veiculosTotais = new GerenciadorVeiculos();
        veiculosTotais -> adicionarVeiculo (mercedes);
        veiculosTotais -> adicionarVeiculo (bmw);
        veiculosTotais -> adicionarVeiculo (citroen);
        veiculosTotais -> mostrarVeiculos ();


    Cliente* cliente = new Cliente ("Junior", 12345678, 999554422, "Rua", "cliente@email.com");
    Pedido* pedido1 = new Pedido (cliente, -29.991167370515466, -51.13583471499755);
        pedido1 -> setVeiculo (mercedes);
        pedido1 -> setVeiculo (bmw);
        pedido1 -> setVeiculo (citroen);

    Roteirizacao* gerenciador = new Roteirizacao (pedido1, veiculosTotais);
        gerenciador -> checarTransporteNecessario();
        gerenciador -> roteiriza();

    return 0;
}