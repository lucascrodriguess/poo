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
        int chassi;
        int peso;
        string localizacao;

    public:
        Veiculo ();
        Veiculo (string modelo);
        Veiculo (string categoria, string modelo, int capacidadeDeCarga, int anoDeFabricacao, int chassi, int peso, string localizacao);
        ~Veiculo ();
        
        int setCategoria (string categoria);
        int setModelo (string modelo);
        int setId ();
        int setCapacidadeDeCarga (int capacidadeDeCarga);
        int setAnoDeFabricacao (int anoDeFabricacao);
        int setChassi (int chassi);
        int setPeso (int peso);
        int setLocalizacao (string localizacao);

        string getCategoria ();
        string getModelo ();
        int getId ();
        int getCapacidadeDeCarga ();
        int getAnoDeFabricacao ();
        int getChassi ();
        int getPeso ();
        string getLocalizacao ();

        bool operator== (Veiculo& comparacao);
};