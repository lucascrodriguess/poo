#include "Caminhao.h"
#include <iostream>

    Caminhao::Caminhao (){
        setId();
        categoria = "Caminhao";
        this->modelo = "";
        this->capacidadeDeCarga = 0;
        this->anoDeFabricacao = 0;
        this->volume = 0;
        this->peso = 0;
        this->localizacaoLatitude = 0.0;
        this->localizacaoLongitude = 0.0;
    }

    Caminhao::Caminhao (string modelo, int capacidadeDeCarga, int anoDeFabricacao, int volume, int peso, double localizacaoLatitude, double localizacaoLongitude){
        setId();
        categoria = "Caminhao";
        setModelo(modelo);
        setCapacidadeDeCarga(capacidadeDeCarga);
        setAnoDeFabricacao(anoDeFabricacao);
        setVolume(volume);
        setPeso(peso);
        setLocalizacaoLatitude(localizacaoLatitude);
        setLocalizacaoLongitude(localizacaoLongitude);
    }

    Caminhao::~Caminhao () {}