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
            << "\nCpf: " << dado.getCPF()
            << "\nTelefone: " << dado.getTelefone()
            << "\nEndereco: " << dado.getEndereco()
            << "\nEmail: " << dado.getEmail()
            << "\n\n" << std::endl;
        }
    }
    
    else std::cout << "Lista de Clientes vazia" << std::endl;
}