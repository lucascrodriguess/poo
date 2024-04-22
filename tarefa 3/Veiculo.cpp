#include "Veiculo.h"

using namespace std;

    int Veiculo::idGeral = 0;

    Veiculo::Veiculo (){
        setId();
        categoria = "";
        modelo = "";
        capacidadeDeCarga = 0;
        anoDeFabricacao = 0;
        volume = 0;
        peso = 0;
        localizacaoLatitude = 0;
        localizacaoLongitude = 0;
    }

    Veiculo::Veiculo (string modelo){
        setId();
        categoria = "";
        this->modelo = modelo;
        capacidadeDeCarga = 0;
        anoDeFabricacao = 0;
        volume = 0;
        peso = 0;
        localizacaoLatitude = 0;
        localizacaoLongitude = 0;
    }

    Veiculo::Veiculo (string categoria, string modelo, int capacidadeDeCarga, int anoDeFabricacao, int volume, int peso, double localizacaoLatitude, double localizacaoLongitude){
        setId();
        this->categoria = categoria;
        this->modelo = modelo;
        this->capacidadeDeCarga = capacidadeDeCarga;
        this->anoDeFabricacao = anoDeFabricacao;
        this->volume = volume;
        this->peso = peso;
        this->localizacaoLatitude = localizacaoLatitude;
        this->localizacaoLongitude = localizacaoLongitude;
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
    int Veiculo::setVolume (int volume){
        this->volume = volume;
        return 1;
    }
    int Veiculo::setPeso (int peso){
        this->peso = peso;
        return 1;
    }
    int Veiculo::setLocalizacaoLatitude (double localizacaoLatitude){
        this->localizacaoLatitude = localizacaoLatitude;
        return 1;
    }
    int Veiculo::setLocalizacaoLongitude (double localizacaoLongitude){
        this->localizacaoLongitude = localizacaoLongitude;
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
    int Veiculo::getVolume (){
        return volume;
    }
    int Veiculo::getPeso (){
        return peso;
    }
    double Veiculo::getLocalizacaoLatitude (){
        return localizacaoLatitude;
    }        
    double Veiculo::getLocalizacaoLongitude (){
        return localizacaoLongitude;
    }

    bool Veiculo::operator== (Veiculo& comparacao){
        return (this->getId() == comparacao.getId());
    }
