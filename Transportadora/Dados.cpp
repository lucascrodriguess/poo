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
    } else {
        getline(file, linha); // pula a linha de titulos da tabela
        std::cout<<"Arquivo aberto!" << std::endl;
    }

    while (getline(file, linha)) {
        //std::cout<<"linha parcial: " << linha << std::endl;
        linha = ArrumaLinha(file, linha);
        //std::cout<<"linha completa: " << linha << std::endl;
        SeparaeArmazenaDados(linha, ','); 
    }
    std::cout<<"Arquivo fechado!\n" << std::endl;
    file.close();
}

std::string Dados::ArrumaLinha(std::ifstream &x, std::string line) {
    
    int quebra_de_linha = 0;
    std::string resultado = line;
    while (!line.empty() && quebra_de_linha < 6) {
        std::string continuacao;
        if(!getline(x, continuacao)){
            break;
        }
        resultado += continuacao;
        quebra_de_linha++;
    }
    return resultado;
}

void Dados::SeparaeArmazenaDados(const std::string linha, char x) {

    std::istringstream lineStream(linha);
    std::string conteudo_atributo;
    
    int virgulas = 0;
    Cliente *novoCliente = new Cliente;
    Pedido *novoPedido = new Pedido;

    int quebra_de_linha = 0;

    do{ 
        getline(lineStream, conteudo_atributo, x);
        //std::cout<<"conteudo_atributo: " << conteudo_atributo << std::endl;
        std::string conteudo2;

        int flag = 0;
        
        //std::cout<<"virgulas: " << virgulas << std::endl;
        //std::cout<<"flag: " << flag << std::endl;

        switch (virgulas) {
        case 0:
            //std::cout<<"nome valido" << std::endl;
            novoCliente->setNome(conteudo_atributo);
            break;
        case 1:
            //std::cout<<"cpf valido" << std::endl;
            novoCliente->setCPF(conteudo_atributo);
            break;
        case 2:
            //std::cout<<"endereco valido" << std::endl;
            if(conteudo_atributo.back() == '"') {
                conteudo2 = novoCliente->getEndereco() + ",";
                novoCliente->setEndereco(conteudo2+=conteudo_atributo);
                virgulas++; 
            } else novoCliente->setEndereco(conteudo_atributo);
            break;
        case 3:
            //std::cout<<"telefone valido" << std::endl;
            novoCliente->setTelefone(conteudo_atributo);
            break;
        case 4:
            //std::cout<<"email valido" << std::endl;
            novoCliente->setEmail(conteudo_atributo);
            break;
        case 5:
            //std::cout<<"endereco coleta valido" << std::endl;
            if(conteudo_atributo.back() == '"') {
                conteudo2 = novoPedido->getEnderecoColeta() + ",";
                novoPedido->setEnderecoColeta(conteudo2+=conteudo_atributo);
                virgulas++; 
            } else novoPedido->setEnderecoColeta(conteudo_atributo);
            break;
        case 6:
            //std::cout<<"endereco entrega valido" << std::endl;
            if(conteudo_atributo.back() == '"') {
                conteudo2 = novoPedido->getEnderecoEntrega() + ",";
                novoPedido->setEnderecoEntrega(conteudo2+=conteudo_atributo);
                virgulas++; 
            } else novoPedido->setEnderecoEntrega(conteudo_atributo);
            break;
        case 7:
            //std::cout<<"peso valido" << std::endl;
            novoPedido->setPesoDaCarga(std::stoi(conteudo_atributo));
            break;
        case 8:
            //std::cout<<"volume valido" << std::endl;
            novoPedido->setVolumeDaCarga(std::stoi(conteudo_atributo));
            break;
        case 9:
            //std::cout<<"prioridade valido" << std::endl;
            novoPedido->setPrioridade(conteudo_atributo);
            break;
        default:
            throw std::runtime_error("Erro ao armazenar dados do cliente!");
            break;
        }

        for(auto caractere : conteudo_atributo) {
            if(caractere == '"') {
                flag = 1;
                break;
            }
        }

        if(flag == 0) {
            virgulas++;
        }
        
    }while(virgulas < 10 && !conteudo_atributo.empty());

    listaClientes->adicionaCliente(novoCliente);
    listaPedidos->adicionaPedidos(novoPedido);
}




