#include "Onibus.h"

    Onibus::Onibus () {
        categoria = "Onibus";
    }

    Onibus::Onibus (string modelo) {
        categoria = "Onibus";
        this->modelo = modelo;
    }

    Onibus::Onibus (string modelo, int capacidadeDeCarga, int anoDeFabricacao, int chassi, int peso, string localizacao){
        setId();
        categoria = "Onibus";
        this->modelo = modelo;
        this->capacidadeDeCarga = capacidadeDeCarga;
        this->anoDeFabricacao = anoDeFabricacao;
        this->chassi = chassi;
        this->peso = peso;
        this->localizacao = localizacao;
    }

    Onibus::~Onibus () {}