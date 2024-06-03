#include "ListaClientes.h"

ListaClientes::ListaClientes(){
    listaClientes = new std::list<Cliente>;
};
ListaClientes::~ListaClientes(){
    delete listaClientes;
};

void ListaClientes::adicionaCliente(Cliente *pessoa) {
    listaClientes->emplace_back(*pessoa);
}

void ListaClientes::mostraListaClientes() {
    if(!listaClientes->empty()) {
        for(auto &dado : *listaClientes) {
            std::cout << "Nome: " << dado.getNome()
            << "Cpf: " << dado.getCPF()
            << "Telefone: " << dado.getTelefone()
            << "Endereco: " << dado.getEndereco()
            << "Email: " << dado.getEmail() << std::endl;
        }
    }
    
    else std::cout << "Lista de Clientes vazia" << std::endl;
}