#include "Dados.h"

Dados::Dados(ListaClientes *listaClientes, ListaPedidos *listaPedidos) {
    setListaClientes(listaClientes);
    setListaPedidos(listaPedidos);
}

Dados::~Dados() {}

void Dados::setListaClientes(ListaClientes *listaClientes) {
    this->listaClientes = listaClientes;
    return;
}
void Dados::setListaPedidos(ListaPedidos *listaPedidos){
    this->listaPedidos = listaPedidos;
}

void Dados::LerArquivoCSV(const std::string arquivo) {

    std::ifstream file(arquivo);
    std::string linha;

    if (!file.is_open()) {
        throw std::runtime_error("Erro ao abrir o arquivo");
        return;
    } else std::getline(file, linha); // pula a linha de titulos da tabela

    while (std::getline(file, linha)) {
        linha = ArrumaLinha(file, linha);
        std::cout<<"linha completa..." << linha << std::endl;
        SeparaeArmazenaDados(linha, ',');
    }

    file.close();
}

std::string Dados::ArrumaLinha(std::ifstream &x, std::string line) {
    
    int quebra_de_linha = 0;
    while (!line.empty() && line.back() == '\n' && quebra_de_linha < 6) {
        line.pop_back();
        quebra_de_linha++;
        
        std::string continuacao;
        if (std::getline(x, continuacao)) {
            line += continuacao;
        } else {
            break;
        }
    }
    return line;
}

void Dados::SeparaeArmazenaDados(const std::string linha, char x) {

    std::istringstream lineStream(linha);
    std::string conteudo_atributo;
    
    int virgulas = 0;
    Cliente *novoCliente = new Cliente;
    Pedido *novoPedido = new Pedido;

    int quebra_de_linha = 0;

    do{ std::getline(lineStream, conteudo_atributo, x);
        std::cout<<"conteudo_atributo: " << conteudo_atributo << std::endl;

        switch (virgulas) {
        case 0:
            std::cout<<"nome valido" << std::endl;
            novoCliente->setNome(conteudo_atributo);
            break;
        case 1:
            std::cout<<"cpf valido" << std::endl;
            novoCliente->setCPF(conteudo_atributo);
            break;
        case 2:
            std::cout<<"telefone valido" << std::endl;
            novoCliente->setTelefone(conteudo_atributo);
            break;
        case 3:
            std::cout<<"endereco valido" << std::endl;
            novoCliente->setEndereco(conteudo_atributo);
            break;
        case 4:
            std::cout<<"email valido" << std::endl;
            novoCliente->setEmail(conteudo_atributo);
            break;
        case 5:
            std::cout<<"endereco coleta valido" << std::endl;
            novoPedido->setEnderecoColeta(conteudo_atributo);
            break;
        case 6:
            std::cout<<"endereco entrega valido" << std::endl;
            novoPedido->setEnderecoEntrega(conteudo_atributo);
            break;
        case 7:
            std::cout<<"peso valido" << std::endl;
            novoPedido->setPesoDaCarga(std::stoi(conteudo_atributo));
            break;
        case 8:
            std::cout<<"volume valido" << std::endl;
            novoPedido->setVolumeDaCarga(std::stoi(conteudo_atributo));
            break;
        case 9:
            std::cout<<"prioridade valido" << std::endl;
            novoPedido->setPrioridade(conteudo_atributo);
            break;
        default:
            throw std::runtime_error("Erro ao armazenar dados do cliente!");
            break;
        }

        /*if (conteudo_atributo.front() != '"' && conteudo_atributo.back() != '"') {
            virgulas++;
        }*/

        if (virgulas != 2 && virgulas != 5 && virgulas != 6) {
            virgulas++;
        }
        
    }while(virgulas < 10 && !conteudo_atributo.empty());

    listaClientes->adicionaCliente(novoCliente);
    listaPedidos->adicionaPedidos(novoPedido);
}


