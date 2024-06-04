#pragma once
#include <iostream>
#include <list>
#include <string>
#include "Cliente.h"

class ListaClientes {
    private:
        std::list<Cliente> *listaClientes;

    public:
        ListaClientes();
        ~ListaClientes();

        std::list<Cliente>*getLista();
        void adicionaCliente(Cliente *pessoa);
        void mostraListaClientes();

};