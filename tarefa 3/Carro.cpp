#include "Carro.h"

    Carro::Carro () {
        categoria = "Carro";
    }

    Carro::Carro (string modelo) {
        categoria = "Carro";
        this->modelo = modelo;
    }

    Carro::Carro (string modelo, int capacidadeDeCarga, int anoDeFabricacao, int volume, int peso, float localizacaoLatitude, float localizacaoLongitude){
        setId();
        categoria = "Carro";
        this->modelo = modelo;
        this->capacidadeDeCarga = capacidadeDeCarga;
        this->anoDeFabricacao = anoDeFabricacao;
        this->volume = volume;
        this->peso = peso;
        this->localizacaoLatitude = localizacaoLatitude;
        this->localizacaoLongitude = localizacaoLongitude;
    }

    Carro::~Carro () {}