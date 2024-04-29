#include <iostream>
#include "Veiculo.h"
#pragma once

class Caminhao : public Veiculo {

    public:
        Caminhao ();
        Caminhao (string modelo, int capacidadeDeCarga, int anoDeFabricacao, int volume, int peso, double localizacaoLatitude, double localizacaoLongitude);
        ~Caminhao ();
        
};