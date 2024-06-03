#include "Dados.h"

Dados::Dados() {}
Dados::~Dados() {}

void Dados::LerArquivoCSV(const std::string arquivo) {

    std::ifstream file(arquivo);
    std::string linha;

    if (!file.is_open()) {
        throw std::runtime_error("Erro ao abrir o arquivo");
        return;
    } else std::getline(file, linha);

    while (std::getline(file, linha)) {
        SeparaeArmazenaDados(linha, ',');
    }

    file.close();
}

void Dados::SeparaeArmazenaDados(const std::string linha, char x) {

    std::istringstream lineStream(linha);
    std::string conteudo_atributo;
    
    int virgulas = 0;
    Cliente *novoCliente = new Cliente;
    Pedido *novoPedido = new Pedido;

    int quebra_de_linha = 0;

    do{ std::getline(lineStream, conteudo_atributo, x);
        if(!conteudo_atributo.empty() && conteudo_atributo.back() == '\n' && quebra_de_linha < 7) {
            conteudo_atributo.pop_back();
            quebra_de_linha++;
            std::string continuacao_linha;
            std::getline(lineStream, continuacao_linha, x);
            conteudo_atributo += continuacao_linha;
        }

        switch (virgulas) {
        case 0:
            novoCliente->setNome(conteudo_atributo);
            break;
        case 1:
            novoCliente->setCPF(conteudo_atributo);
            break;
        case 2:
            novoCliente->setTelefone(std::stoi(conteudo_atributo));
            break;
        case 3:
            novoCliente->setEndereco(conteudo_atributo);
            break;
        case 4:
            novoCliente->setEmail(conteudo_atributo);
            break;
        case 5:
            novoPedido->setEnderecoColeta(conteudo_atributo);
            break;
        case 6:
            novoPedido->setEnderecoEntrega(conteudo_atributo);
            break;
        case 7:
            novoPedido->setPesoDaCarga(std::stoi(conteudo_atributo));
            break;
        case 8:
            novoPedido->setVolumeDaCarga(std::stoi(conteudo_atributo));
            break;
        case 9:
            novoPedido->setPrioridade(conteudo_atributo);
            break;
        default:
            throw std::runtime_error("Erro ao armazenar dados do cliente!");
            break;
        }

        if (conteudo_atributo.front() != '"' && conteudo_atributo.back() != '"') {
            virgulas++;
        }
        
    }while(virgulas != 10);

    listaClientes.adicionaCliente(novoCliente);
    listaPedidos.adicionaPedidos(novoPedido);
}


