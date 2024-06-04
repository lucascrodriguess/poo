#pragma once
#include <iostream>
#include <list>
#include <string>
#include "Pedido.h"

class ListaPedidos {
    private:
        std::list<Pedido>*listaPedidos;

    public:
        ListaPedidos();
        ~ListaPedidos();

        std::list<Pedido>*getLista();
        void adicionaPedidos(Pedido *pedido);
        void mostraListaPedidos();
     
};