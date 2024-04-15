#include <iostream>
#pragma once

class Carro : public Veiculo {

    public:
        Carro ();
        Carro (string modelo);
        Carro (string modelo, int carga, int ano, int volume, int peso, float localizacaoLatitude, float localizacaoLongitude);
        ~Carro ();
        
};