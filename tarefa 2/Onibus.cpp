#include "Onibus.h"

    Onibus::Onibus () {
        categoria = "Onibus";
    }

    Onibus::Onibus (string nome) {
        categoria = "Onibus";
        modelo = nome;
    }  

    Onibus::Onibus (string nome, int carga, int ano, int chassi, int peso, string localizacao) {
        categoria = "Onibus";
        modelo = nome;
        setId ();
        capacidadeDeCarga = carga;
        anoDeFabricacao = ano;
        this->chassi = chassi;
        this->peso = peso;
        this->localizacao = localizacao;
    }


    Onibus::~Onibus () {
        cout << "Destrutor executado";
    }