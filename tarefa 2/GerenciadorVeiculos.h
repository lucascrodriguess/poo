#include <iostream>
#include <list>
#include "Veiculos.h"
#pragma once

using namespace std;

class GerenciadorVeiculos {

    private:
        list<Veiculo>* lista;

    public:
        GerenciadorVeiculos ();
        ~GerenciadorVeiculos ();
        
        list<Veiculo>* obterVeiculosDisponiveis ();

        void adicionarVeiculo (Veiculo veiculo);
        void adicionarVeiculo (Veiculo* veiculo);
        void removerVeiculo (Veiculo veiculo);
        Veiculo* buscarVeiculo (string modelo);
        void mostrarVeiculos ();
};