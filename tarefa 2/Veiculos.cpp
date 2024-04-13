#include <iostream>
#include "Veiculos.h"

using namespace std;

    int Veiculo::idGeral = 0;

    Veiculo::Veiculo (){
        setId();
        categoria = "";
        modelo = "";
        capacidadeDeCarga = 0;
        anoDeFabricacao = 0;
        chassi = 0;
        peso = 0;
        localizacao = "";
    }

    Veiculo::Veiculo (string modelo){
        setId();
        categoria = "";
        this->modelo = modelo;
        capacidadeDeCarga = 0;
        anoDeFabricacao = 0;
        chassi = 0;
        peso = 0;
        localizacao = "";
    }

    Veiculo::Veiculo (string categoria, string modelo, int capacidadeDeCarga, int anoDeFabricacao, int chassi, int peso, string localizacao){
        setId();
        this->categoria = categoria;
        this->modelo = modelo;
        this->capacidadeDeCarga = capacidadeDeCarga;
        this->anoDeFabricacao = anoDeFabricacao;
        this->chassi = chassi;
        this->peso = peso;
        this->localizacao = localizacao;
    }

    Veiculo::~Veiculo (){
        cout << "Destrutor executado\n";
    }


    int Veiculo::setCategoria (string categoria){
        this->categoria = categoria;
        return 1;
    }
    int Veiculo::setModelo (string modelo){
        this->modelo = modelo;
        return 1;
    } 
    int Veiculo::setId (){
        idGeral++;
        this->id = idGeral;
        return 1;
    }     
    int Veiculo::setCapacidadeDeCarga (int capacidadeDeCarga){
        this->capacidadeDeCarga = capacidadeDeCarga;
        return 1;
    }
    int Veiculo::setAnoDeFabricacao (int anoDeFabricacao){
        this->anoDeFabricacao = anoDeFabricacao;
        return 1;
    }
    int Veiculo::setChassi (int chassi){
        this->chassi = chassi;
        return 1;
    }
    int Veiculo::setPeso (int peso){
        this->peso = peso;
        return 1;
    }
    int Veiculo::setLocalizacao (string localizacao){
        this->localizacao = localizacao;
        return 1;
    }


    string Veiculo::getCategoria (){
        return categoria;
    }
    string Veiculo::getModelo (){
        return modelo;
    }
    int Veiculo::getId (){
        return id;
    }
    int Veiculo::getCapacidadeDeCarga (){
        return capacidadeDeCarga;
    }
    int Veiculo::getAnoDeFabricacao (){
        return anoDeFabricacao;
    }
    int Veiculo::getChassi (){
        return chassi;
    }
    int Veiculo::getPeso (){
        return peso;
    }
    string Veiculo::getLocalizacao (){
        return localizacao;
    }

    bool Veiculo::operator== (Veiculo& comparacao){
        return (this->getId() == comparacao.getId());
    }
