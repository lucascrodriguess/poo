#include <iostream>
#pragma once

using namespace std;

class Veiculo {

    protected:        
        static int idGeral;
        string categoria;
        string modelo;
        int id;
        int capacidadeDeCarga;
        int anoDeFabricacao;
        int volume;
        int peso;
        double localizacaoLatitude;
        double localizacaoLongitude;

    public:
        Veiculo();
        Veiculo(string modelo);
        Veiculo(string categoria, string modelo, int capacidadeDeCarga, int anoDeFabricacao, int volume, int peso, double localizacaoLatitude, double localizacaoLongitude);
        ~Veiculo();
        
        int setCategoria(string categoria);
        int setModelo(string modelo);
        int setId();
        int setCapacidadeDeCarga(int capacidadeDeCarga);
        int setAnoDeFabricacao(int anoDeFabricacao);
        int setVolume(int volume);
        int setPeso(int peso);
        int setLocalizacaoLatitude(double localizacaoLatitude);
        int setLocalizacaoLongitude(double localizacaoLongitude);

        string getCategoria ();
        string getModelo ();
        int getId();
        int getCapacidadeDeCarga();
        int getAnoDeFabricacao();
        int getVolume();
        int getPeso();
        double getLocalizacaoLatitude();
        double getLocalizacaoLongitude();

        bool operator== (Veiculo& comparacao);
};