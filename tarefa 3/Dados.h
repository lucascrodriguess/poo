#pragma once
#include <iostream>

class Dados {
private:
    std::string nome;
    int cpf;
    std::string enderecoColeta;
    std::string ederecoEntrega;
    int peso;
    int volume;
    std::string prioridade;

public:
    Dados();
    ~Dados();
};