#include <iostream>
#pragma once

using namespace std;

class Veiculo {

//atributos
private:
    string categoria;
    string modelo;
    int capacidadeDeCarga;  //  em kg
    int anoDeFabricacao;
    int chassi;
    int peso;
    string localizacao;


//metodos set
    public:
        void setCategoria (string categoria){
            this->categoria = categoria;
        }
        void setModelo (string modelo){
            this->modelo = modelo;
        }     
        void setCapacidadeDeCarga (int capacidadeDeCarga){
            this->capacidadeDeCarga = capacidadeDeCarga;
        }
        void setAnoDeFabricacao (int anoDeFabricacao){
            this->anoDeFabricacao = anoDeFabricacao;
        }
        void setChassi (int chassi){
            this->chassi = chassi;
        }
        void setPeso (int peso){
            this->peso = peso;
        }
        void setLocalizacao (string localizacao){
            this->localizacao = localizacao;
        }

//metodos get
        string getModelo (){
            return modelo;
        }
        int getCapacidadeDeCarga (){
            return capacidadeDeCarga;
        }
        int getAnoDeFabricacao (){
            return anoDeFabricacao;
        }
        int getChassi (){
            return chassi;
        }
        int getPeso (){
            return peso;
        }
        string getLocalizacao (){
            return localizacao;
        }

//construtor
        Veiculo (string tipo, string nome, int carga, int ano, int chassi, int peso, string localizacao){
            setCategoria (tipo);
            setModelo (nome);
            setCapacidadeDeCarga (carga);
            setAnoDeFabricacao (ano);
            setChassi (chassi);
            setPeso (peso);
            setLocalizacao (localizacao);
        }
};