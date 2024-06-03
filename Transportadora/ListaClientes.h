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

        void adicionaCliente(Cliente *pessoa);
        void mostraListaClientes();

};