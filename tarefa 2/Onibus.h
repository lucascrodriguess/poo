#include <iostream>
#include "Veiculos.h"
#pragma once

class Onibus : public Veiculo {

    public:
        Onibus ();
        Onibus (string modelo);
        Onibus (string modelo, int carga, int ano, int chassi, int peso, string localizacao);
        ~Onibus ();
        
};