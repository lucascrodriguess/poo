#include "Dados.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>

Dados::Dados() {}
Dados::~Dados() {}

void Dados::LerArquivoCSV(const std::string arquivo) {

    std::ifstream file(arquivo);

    if (!file.is_open()) {
        throw std::runtime_error("Erro ao abrir o arquivo");
        return;
    }

    std::string linha;

    while (std::getline(file, linha)) {
        SeparaeArmazenaDados(linha, ',');
    }

    file.close();
}

void Dados::SeparaeArmazenaDados(const std::string linha, char x) {

    std::istringstream lineStream(linha);
    std::string conteudo_atributo;
    
    int contador = 0;

    while (std::getline(lineStream, conteudo_atributo, x)) {

        switch (contador) {
        case 0:
            this->nome.push_back(conteudo_atributo);
            break;
        case 1:
            this->cpf.push_back(std::stoi(conteudo_atributo));
            break;
        case 2:
            this->telefone.push_back(std::stoi(conteudo_atributo));
            break;
        case 3:
            this->endereco.push_back(conteudo_atributo);
            break;
        case 4:
            this->email.push_back(conteudo_atributo);
            break;
        case 5:
            this->enderecoColeta.push_back(conteudo_atributo);
            break;
        case 6:
            this->enderecoEntrega.push_back(conteudo_atributo);
            break;
        case 7:
            this->peso.push_back(std::stoi(conteudo_atributo));
            break;
        case 8:
            this->volume.push_back(std::stoi(conteudo_atributo));
            break;
        case 9:
            this->prioridade.push_back(conteudo_atributo);
            break;
        default:
            std::cout<<"Erro ao armazenar dados do cliente!" << std::endl;
            break;
        }

        if (conteudo_atributo.front() != '"' && conteudo_atributo.back() != '"') {
            contador++;
        }
    }
}

void Dados::mostraDados(Dados *dados) {
    std::cout << "Nome || CPF || Telefone || Endereço || Email || Endereço de Coleta || Endereço de Entrega || Peso(kg) || Volume(m³) || Prioridade" << std::endl;

    auto it_nome = dados->nome.begin();
    auto it_cpf = dados->cpf.begin();
    auto it_telefone = dados->telefone.begin();
    auto it_endereco = dados->endereco.begin();
    auto it_email = dados->email.begin();
    auto it_enderecoColeta = dados->enderecoColeta.begin();
    auto it_enderecoEntrega = dados->enderecoEntrega.begin();
    auto it_peso = dados->peso.begin();
    auto it_volume = dados->volume.begin();
    auto it_prioridade = dados->prioridade.begin();

    while (it_nome != dados->nome.end()) {
        std::cout << "- " << *it_nome << ", ";
        std::cout << *it_cpf << ", ";
        std::cout << *it_telefone << ", ";
        std::cout << *it_endereco << ", ";
        std::cout << *it_email << ", ";
        std::cout << *it_enderecoColeta << ", ";
        std::cout << *it_enderecoEntrega << ", ";
        std::cout << *it_peso << ", ";
        std::cout << *it_volume << ", ";
        std::cout << *it_prioridade << std::endl;

        ++it_nome;
        ++it_cpf;
        ++it_telefone;
        ++it_endereco;
        ++it_email;
        ++it_enderecoColeta;
        ++it_enderecoEntrega;
        ++it_peso;
        ++it_volume;
        ++it_prioridade;
    }
}


