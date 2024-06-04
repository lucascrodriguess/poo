#include "Cliente.h"
#include <iostream>

using namespace std;

    Cliente::Cliente (){
        this->nome = "";
        this->cpf = "";
        this->telefone = "";
        this->endereco = "";
        this->email = "";
    }
    
    Cliente::Cliente (string nome, string cpf, std::string telefone, string endereco, string email){
        setNome(nome);
        setCPF(cpf);
        setTelefone(telefone);
        setEndereco(endereco);
        setEmail(email);
    }

    Cliente::~Cliente (){}

    int Cliente::setNome (string nome){
        int flag;
        for(auto &n : nome) {
            if(!isdigit(n)) {
                flag = 0;
            } 
            else {
                flag = 1;
                return 0;
            }
        }
        this->nome = nome;
        return 1;               
    }

    int Cliente::setCPF (string cpf){ //arrumar
        int contador = 0;
        for(auto &n : cpf) {
            contador++;
            if(!isdigit(n)) {
                return 0;
            }
        }

        if(contador != 11) {
            return 0;
        }
        this->cpf = cpf;
        return 1;
    }

    int Cliente::setTelefone (std::string telefone){
        this->telefone = telefone;
        return 1;
    }

    int Cliente::setEndereco (string endereco){
        this->endereco = endereco;
        return 1;
    }

    int Cliente::setEmail (string email){
        int verificador = 0;
        for(auto &Char : email) {
            if (Char == '@') {
                verificador++;
            }
        }

        if (verificador != 1) {
            return 0;
        }

        this->email = email;
        return 1;
    }

    string Cliente::getNome () {
        if(this->nome.empty()) {
            return "Nome invalido!";
        }
        return this->nome;
    }

    string Cliente::getCPF () {
        if(this->cpf.empty()) {
            return "Cpf invalido!";
        }
        return this->cpf;
    }

    std::string Cliente::getTelefone () {
        /*if(this->telefone == 0) {
            printf("Telefone Invalido");
            return 0;
        }*/
        return this->telefone;
    }

    string Cliente::getEndereco () {
        if(this->endereco.empty()) {
            return "Endereco invalido!";
        }
        return this->endereco;
    }

    string Cliente::getEmail () {
        if(this->email.empty()) {
            return "Email invalido!";
        }
        return this->email;
    }

    ostream& operator<<(ostream& out, Cliente *cliente) {
        out << "\nNome: " << cliente->getNome() << 
        "\nCpf: " << cliente->getCPF() << 
        "\nTelefone: " << cliente->getTelefone() << 
        "\nEndereco: " << cliente->getEndereco() <<  
        "\nEmail: " << cliente->getEmail(); 
        return out;
    }
