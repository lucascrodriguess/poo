#include <iostream>
#include <list>
#include "Veiculos.h"
#pragma once

using namespace std;

class GerenciadorVeiculos {

    private:
        list<Veiculo> veiculos;

    public:
        GerenciadorVeiculos ();
        ~GerenciadorVeiculos ();
        
        void adicionarVeiculo (Veiculo veiculo);
        void removerVeiculo (Veiculo veiculo);
        Veiculo* buscarVeiculo (string modelo);
        list<Veiculo>* getVeiculosDisponiveis ();
};