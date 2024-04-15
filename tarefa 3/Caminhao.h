#include <iostream>
#pragma once

class Caminhao : public Veiculo {

    public:
        Caminhao ();
        Caminhao (string modelo);
        Caminhao (string modelo, int capacidadeDeCarga);
        Caminhao (string modelo, int carga, int ano, int volume, int peso, float localizacaoLatitude, float localizacaoLongitude);
        ~Caminhao ();
        
};