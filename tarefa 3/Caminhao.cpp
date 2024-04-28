#include "Caminhao.h"
#include <iostream>

    Caminhao::Caminhao (){
        categoria = "Caminhao";
    }

    Caminhao::Caminhao (string modelo){
        categoria = "Caminhao";
        this->modelo = modelo;
    }

    Caminhao::Caminhao (string modelo, int capacidadeDeCarga) {
        setId();
        categoria = "Caminhao";
        this->modelo = modelo;
        this->capacidadeDeCarga = capacidadeDeCarga;
    }

    Caminhao::Caminhao (string modelo, int capacidadeDeCarga, int anoDeFabricacao, int volume, int peso, double localizacaoLatitude, double localizacaoLongitude){
        setId();
        categoria = "Caminhao";
        this->modelo = modelo;
        this->capacidadeDeCarga = capacidadeDeCarga;
        this->anoDeFabricacao = anoDeFabricacao;
        this->volume = volume;
        this->peso = peso;
        this->localizacaoLatitude = localizacaoLatitude;
        this->localizacaoLongitude = localizacaoLongitude;
    }

    Caminhao::~Caminhao () {}