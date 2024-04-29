#include "Veiculo.h"

using namespace std;

    int Veiculo::idGeral = 0;

    Veiculo::Veiculo (){
        this->categoria = "";
        this->modelo = "";
        this->capacidadeDeCarga = 0;
        this->anoDeFabricacao = 0;
        this->volume = 0;
        this->peso = 0;
        this->localizacaoLatitude = 0;
        this->localizacaoLongitude = 0;
    }

    Veiculo::Veiculo (string categoria, string modelo, int capacidadeDeCarga, int anoDeFabricacao, int volume, int peso, double localizacaoLatitude, double localizacaoLongitude){
        setId();
        setCategoria(categoria);
        setModelo(modelo);
        setCapacidadeDeCarga(capacidadeDeCarga);
        setAnoDeFabricacao(anoDeFabricacao);
        setVolume(volume);
        setPeso(peso);
        setLocalizacaoLatitude(localizacaoLatitude);
        setLocalizacaoLongitude(localizacaoLongitude);
    }

    Veiculo::~Veiculo (){
        cout << "Destrutor executado\n";
    }

    int Veiculo::setCategoria (string categoria){
        for(auto &categoria : categoria) {
            if(!isalpha(categoria)) {
                return 0;
            }
        }
        this->categoria = categoria;
        return 1;
    }

    int Veiculo::setModelo (string modelo){
        this->modelo = modelo;
        return 1;
    } 

    int Veiculo::setId (){
        this->id = ++idGeral;
        return 1;
    }     

    int Veiculo::setCapacidadeDeCarga (int capacidadeDeCarga){
        if(capacidadeDeCarga <= 0) return 0;
        this->capacidadeDeCarga = capacidadeDeCarga;
        return 1;
    }

    int Veiculo::setAnoDeFabricacao (int anoDeFabricacao){
        if(anoDeFabricacao <= 0) return 0;
        this->anoDeFabricacao = anoDeFabricacao;
        return 1;
    }

    int Veiculo::setVolume (int volume){
        if(volume <= 0) return 0;
        this->volume = volume;
        return 1;
    }

    int Veiculo::setPeso (int peso){
        if(peso <= 0) return 0;
        this->peso = peso;
        return 1;
    }

    int Veiculo::setLocalizacaoLatitude (double localizacaoLatitude){
        if(localizacaoLatitude == 0) return 0;
        this->localizacaoLatitude = localizacaoLatitude;
        return 1;
    }

    int Veiculo::setLocalizacaoLongitude (double localizacaoLongitude){
        if(localizacaoLongitude == 0) return 0;
        this->localizacaoLongitude = localizacaoLongitude;
        return 1;
    }    

    string Veiculo::getCategoria() {
        return categoria;
    }

    string Veiculo::getModelo() {
        return modelo;
    }

    int Veiculo::getId() {
        return id;
    }

    int Veiculo::getCapacidadeDeCarga() {
        if(this->capacidadeDeCarga == 0) {
            printf("\nCapacidade de carga invalida");
            return 0;
        }
        return capacidadeDeCarga;
    }

    int Veiculo::getAnoDeFabricacao() {
        if(this->anoDeFabricacao == 0) {
            printf("\nAno de fabricacao invalido");
            return 0;
        }
        return anoDeFabricacao;
    }

    int Veiculo::getVolume() {
        if(this->volume == 0) {
            printf("\nVolume invalido");
            return 0;
        }
        return volume;
    }

    int Veiculo::getPeso() {
        if(this->peso == 0) {
            return 0;
        }
        return peso;
    }

    double Veiculo::getLocalizacaoLatitude() {
        if(this->localizacaoLatitude == 0) {
            printf("\nLatitude invalida");
            return 0;
        }
        return localizacaoLatitude;
    }

    double Veiculo::getLocalizacaoLongitude() {
        if(this->localizacaoLongitude == 0) {
            printf("\nLongitude invalida");
            return 0;
        }
        return localizacaoLongitude;
    }

    bool Veiculo::operator == (Veiculo& comparacao){
        return (this->getId() == comparacao.getId());
    }
