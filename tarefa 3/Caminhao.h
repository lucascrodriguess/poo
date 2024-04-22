#include <iostream>
#pragma once

class Caminhao : public Veiculo {

    public:
        Caminhao ();
        Caminhao (string modelo);
        Caminhao (string modelo, int capacidadeDeCarga);
        Caminhao (string modelo, int capacidadeDeCarga, int anoDeFabricacao, int volume, int peso, double localizacaoLatitude, double localizacaoLongitude);
        ~Caminhao ();
        
};