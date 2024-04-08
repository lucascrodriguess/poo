#include <iostream>
#include "Veiculos.h"

using namespace std;

    Veiculo::Veiculo (){}

    Veiculo::Veiculo (string tipo, string nome, string placa, int carga, int ano, int chassi, int peso, string localizacao){
        categoria = tipo;
        modelo = nome;
        this->placa = placa;
        capacidadeDeCarga = carga;
        anoDeFabricacao = ano;
        this->chassi = chassi;
        this->peso = peso;
        this->localizacao = localizacao;
    }

    Veiculo::~Veiculo (){}


    int Veiculo::setCategoria (string categoria){
        this->categoria = categoria;
        return 1;
    }
    int Veiculo::setModelo (string modelo){
        this->modelo = modelo;
        return 1;
    } 
    int Veiculo::setPlaca (string placa){
        this->placa = placa;
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
    string Veiculo::getPlaca (){
        return placa;
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