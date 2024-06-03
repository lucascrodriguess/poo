#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>

class Dados {
private:
    std::list<std::string> nome;
    std::list<int> cpf;
    std::list<int> telefone;
    std::list<std::string> endereco;
    std::list<std::string> email;
    std::list<std::string> enderecoColeta;
    std::list<std::string> enderecoEntrega;
    std::list<int> peso;
    std::list<int> volume;
    std::list<std::string> prioridade;

public:
    Dados();
    ~Dados();

    void LerArquivoCSV(const std::string arquivo); 
    void SeparaeArmazenaDados(const std::string linha, char x);    
    void mostraDados(Dados *dados);                                       
};