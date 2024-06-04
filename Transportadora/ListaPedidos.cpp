#include "ListaPedidos.h"

ListaPedidos::ListaPedidos(){
    listaPedidos = new std::list<Pedido>;
};
ListaPedidos::~ListaPedidos(){
    delete listaPedidos;
};

std::list<Pedido> *ListaPedidos::getLista() {
    return listaPedidos;
}

void ListaPedidos::adicionaPedidos(Pedido *pedido) {
    listaPedidos->emplace_back(*pedido);
}

void ListaPedidos::mostraListaPedidos() {
    if(!listaPedidos->empty()) {
        for(auto &dado : *listaPedidos) {
            std::cout << "Endereco Coleta: " << dado.getEnderecoColeta()
            << "\nEndereco Entrega: " << dado.getEnderecoEntrega()
            << "\nPeso: " << dado.getPesoDaCarga()
            << "\nVolume: " << dado.getVolumeDaCarga()
            << "\nPrioridade: " << dado.getPrioridade()
            << "\n\n" << std::endl;
        }
    }

    else std::cout << "Lista de Pedidos vazia" << std::endl;
}