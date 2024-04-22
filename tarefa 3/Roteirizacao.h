#include <iostream>
#include <cmath>
#include "Cliente.h"
#include "Pedido.h"
#include "Caminhao.h"
#include "GerenciadorVeiculos.h"
#pragma once

class Roteirizacao {

    protected:
        Pedido* pedido;
        GerenciadorVeiculos* listaVeiculos;
        Veiculo* caminhaoEscolhido;
        int pesoVeiculos;
        double localAtualLatitude;
        double localAtualLongitude;

    public:
        Roteirizacao (Pedido* pedido, GerenciadorVeiculos* listaVeiculos);

        int checarTransporteNecessario ();  //  define e retorna a capacidade de carga necessária para o transporte
        void definirCaminhao ();   //  define o caminhao que sera utilizado (caminhaoEscolhido)
        double calculaDistancia (double latitudeOrigem, double longitudeOrigem, double latitudeDestino, double longitudeDestino);  // calcula distancia em km de dois pontos pela latitude e pela longitude
        void roteiriza ();

        void setLocalAtualLatitude (double localAtualLatitude);
        void setLocalAtualLongitude (double localAtualLongitude);
};