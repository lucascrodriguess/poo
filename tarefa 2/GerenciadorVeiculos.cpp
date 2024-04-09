#include "GerenciadorVeiculos.h"

using namespace std;

    GerenciadorVeiculos::GerenciadorVeiculos () {
        list<Veiculo>* lista;
    }

    GerenciadorVeiculos::~GerenciadorVeiculos (){
        delete lista;
    }


    list<Veiculo>* GerenciadorVeiculos::obterVeiculosDisponiveis (){
        return lista;
    }


    void GerenciadorVeiculos::adicionarVeiculo (Veiculo veiculo){
        lista -> push_back(veiculo);
    }

    void GerenciadorVeiculos::removerVeiculo (Veiculo veiculo){
        lista -> remove(veiculo);
    }

    Veiculo* GerenciadorVeiculos::buscarVeiculo (string modelo)
    {
        for (list<Veiculo>::iterator it = lista -> begin(); it != lista -> end(); it++)
            if (it -> getModelo() == modelo)
                return &(*it);

        return NULL;
    }

    void GerenciadorVeiculos::mostrarVeiculos ()
    {
        for (list<Veiculo>::iterator it = lista -> begin(); it != lista -> end(); it++)
            cout << it -> getId() << "\n"
                 << it -> getModelo() << "\n"       
                 << it -> getCategoria() << "\n";
    }

