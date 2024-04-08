#include "Onibus.h"

    Onibus::Onibus () {
        categoria = "Onibus";
    }
    
    Onibus::Onibus (string nome, string placa, int carga, int ano, int chassi, int peso, string localizacao) {
        categoria = "Onibus";
        modelo = nome;
        this->placa = placa;
        capacidadeDeCarga = carga;
        anoDeFabricacao = ano;
        this->chassi = chassi;
        this->peso = peso;
        this->localizacao = localizacao;
    }

    Onibus::Onibus (string nome, string placa) {
        categoria = "Onibus";
        this->placa = placa;
        modelo = nome;
    }

    Onibus::Onibus (string nome) {
        categoria = "Onibus";
        modelo = nome;
    }

    Onibus::~Onibus () {
        cout << "\nDestrutor executado";
    }