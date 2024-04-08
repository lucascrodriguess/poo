#include <iostream>
#include "Clientes.h"

using namespace std;

    Cliente::Cliente (){}
    
    Cliente::Cliente (string nome, int cpf, int telefone, string endereco, string email){
        this->nome = nome;
        this->cpf = cpf;
        this->telefone = telefone;
        this->endereco = endereco;
        this->email = email;
    }

    Cliente::~Cliente (){}
    

    int Cliente::setNome (string nome){
        this->nome = nome;
        return 1;
    }
    int Cliente::setCPF (int cpf){
        this->cpf = cpf;
        return 1;
    }
    int Cliente::setTelefone (int telefone){
        this->telefone = telefone;
        return 1;
    }
    int Cliente::setEndereco (string endereço){
        this->endereco = endereço;
        return 1;
    }
    int Cliente::setEmail (string email){
        this->email = email;
        return 1;
    }

    string Cliente::getNome (){
        return this -> nome;
    }
