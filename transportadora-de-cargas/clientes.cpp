#include <iostream>
#pragma once

using namespace std;

class Cliente {

//atributos
private:
    string nome;
    int cpf;
    int telefone;
    string endereço;
    string email;

//metodos set
    public:
        void setNome (string nome){
            this->nome = nome;
        }
        void setCPF (int cpf){
            this->cpf = cpf;
        }
        void setTelefone (int telefone){
            this->telefone = telefone;
        }
        void setEndereco (string endereço){
            this->endereço = endereço;
        }
        void setEmail (string email){
            this->email = email;
        }

//metodos get
        string getNome (){
            return nome;
        }

//construtor
        Cliente (string nome, int cpf, int telefone, string endereco, string email){
            setNome (nome);
            setCPF (cpf);
            setTelefone (telefone);
            setEndereco (endereco);
            setEmail (email);
        }
};