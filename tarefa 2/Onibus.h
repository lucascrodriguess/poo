#include <iostream>
#include "Veiculos.h"
#pragma once

class Onibus : public Veiculo {

    public:
        Onibus ();
        Onibus (string nome, string placa, int carga, int ano, int chassi, int peso, string localizacao);
        Onibus (string nome, string placa);
        Onibus (string nome);
        ~Onibus ();
        
};