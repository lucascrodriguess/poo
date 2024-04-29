#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class Dados {
private:
    std::string nome;
    int cpf;
    std::string enderecoColeta;
    std::string enderecoEntrega;
    int peso;
    int volume;
    std::string prioridade;

public:
    Dados();
    ~Dados();

    void LerArquivoCSV(const std::string arquivo);
    
};