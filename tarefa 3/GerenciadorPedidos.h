#include <iostream>
#include "Cliente.h"
#include "Pedido.h"
#include "GerenciadorVeiculos.h"
#pragma once

class GerenciadorPedidos {

protected:
    Pedido* pedido;
    int pesoVeiculos;

    public:
        GerenciadorPedidos (Pedido* pedido);

        void checarTransporteNecessario ();

};