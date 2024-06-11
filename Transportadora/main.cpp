#include "Veiculo.h"
#include "Carro.h"
#include "Cliente.h"
#include "Pedido.h"
#include "GerenciadorVeiculos.h"
#include "Roteirizacao.h"
#include "Caminhao.h"
#include "Dados.h"
#include "ListaClientes.h"
#include "ListaPedidos.h"
#include <iostream>
#include <list>

int main (void){

    Veiculo *mercedes = new Veiculo ("Carro", "Mercedes", 550, 2012, 1000, 1000, -29.784653953577582, -55.78595963828802);
    Carro *bmw = new Carro ("BMW", 1257, 2018, 320, 1200, -30.263409106400783, -54.931307378969436);
    Carro *citroen = new Carro ("Citroen", 600, 2008, 25, 900, -29.772697697955927, -57.073863311292634);

    GerenciadorVeiculos* veiculosTotais = new GerenciadorVeiculos();
        veiculosTotais -> adicionarVeiculo (mercedes);
        veiculosTotais -> adicionarVeiculo (bmw);
        veiculosTotais -> adicionarVeiculo (citroen);
        veiculosTotais -> mostrarVeiculos ();

    /*Roteirizacao *gerenciador = new Roteirizacao (pedido1, veiculosTotais);
    gerenciador->definirVeiculo();
        gerenciador -> roteiriza();*/
    
    ListaClientes *listaC = new ListaClientes;
    ListaPedidos *listaP = new ListaPedidos;
    Dados *novoDados = new Dados(listaC, listaP);
    novoDados->LerArquivoCSV("dados_entregas.csv");
    listaC->mostraListaClientes();
    listaP->mostraListaPedidos();
}