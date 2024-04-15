#include <iostream>
#include <iomanip>
#include "Cliente.h"
#include "Veiculo.h"
#include "GerenciadorVeiculos.h"
#pragma once

using namespace std;

class Pedido {

    private:
        static int numeroDoPedidoGeral;
        int numeroDoPedido;
        Cliente* cliente;
        GerenciadorVeiculos* veiculos;
        float localDeColetaLatitude;
        float localDeColetaLongitude;
        float localDeEntregaLatitude;
        float localDeEntregaLongitude;
        int pesoDaCarga;
        int volumeDaCarga;

    public:
        Pedido (Cliente* cliente, float localDeColetaLatitude, float localDeColetaLongitude, float localDeEntregaLatitude, float localDeEntregaLongitude);

        int setNumeroDoPedido ();
        int setCliente (Cliente* cliente);
        int setVeiculo (Veiculo* veiculo);
        int setLocalDeColetaLatitude (float localDeColetaLatitude);
        int setLocalDeColetaLongitude (float localDeColetaLongitude);
        int setLocalDeEntregaLatitude (float localDeEntregaLatitude);
        int setLocalDeEntregaLongitude (float localDeEntregaLongitude);
        int setPesoDaCarga (int pesoDaCarga);
        int setVolumeDaCarga (int volumeDaCarga);

        int getNumeroDoPedido ();
        Cliente* getPessoa ();
        GerenciadorVeiculos* getVeiculos ();
        float getLocalDeColetaLatitude ();
        float getLocalDeColetaLongitude ();
        float getLocalDeEntregaLatitude ();
        float getLocalDeEntregaLongitude ();
        int getPesoDaCarga ();
        int getVolumeDaCarga ();

        void mostrarPedido ();
};
