#include "GerenciadorVeiculos.h"

using namespace std;

    GerenciadorVeiculos::GerenciadorVeiculos () {
        list<Veiculo> veiculos;
    }

    GerenciadorVeiculos::~GerenciadorVeiculos (){
    }

    
    void GerenciadorVeiculos::adicionarVeiculo (Veiculo veiculo){
        veiculos.push_back(veiculo);
    }

    void GerenciadorVeiculos::removerVeiculo (Veiculo veiculo){
        veiculos.remove(veiculo);
    }

  Veiculo* GerenciadorVeiculos::buscarVeiculo (string modelo)
    {
        for (list<Veiculo>::iterator it = veiculos.begin(); it != veiculos.end(); it++)
        {
            if (it -> getModelo() == modelo)
                return &(*it);
        }
        return NULL;
    }

    list<Veiculo>* GerenciadorVeiculos::getVeiculosDisponiveis (){
        return &veiculos;
    }

