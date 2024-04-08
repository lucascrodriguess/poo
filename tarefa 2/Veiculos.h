#include <iostream>
#pragma once

using namespace std;

class Veiculo {

    protected:
        string categoria;
        string modelo;
        string placa;
        int capacidadeDeCarga;
        int anoDeFabricacao;
        int chassi;
        int peso;
        string localizacao;

    public:
        Veiculo ();
        Veiculo (string tipo, string nome, string placa, int carga, int ano, int chassi, int peso, string localizacao);
        ~Veiculo ();
        
        int setCategoria (string categoria);
        int setModelo (string modelo);
        int setPlaca (string placa);
        int setCapacidadeDeCarga (int capacidadeDeCarga);
        int setAnoDeFabricacao (int anoDeFabricacao);
        int setChassi (int chassi);
        int setPeso (int peso);
        int setLocalizacao (string localizacao);

        string getCategoria ();
        string getModelo ();
        string getPlaca ();
        int getCapacidadeDeCarga ();
        int getAnoDeFabricacao ();
        int getChassi ();
        int getPeso ();
        string getLocalizacao ();

};