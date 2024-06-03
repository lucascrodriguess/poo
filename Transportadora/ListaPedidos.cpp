#include "ListaPedidos.h"

ListaPedidos::ListaPedidos(){
    listaPedidos = new std::list<Pedido>;
};
ListaPedidos::~ListaPedidos(){
    delete listaPedidos;
};

void ListaPedidos::adicionaPedidos(Pedido *pedido) {
    listaPedidos->emplace_back(*pedido);
}

void ListaPedidos::mostraListaPedidos() {
    for(auto &dado : *listaPedidos) {
        std::cout << "Endereco Coleta: " << dado.getEnderecoColeta()
        << "Endereco Entrega: " << dado.getEnderecoEntrega()
        << "Peso: " << dado.getPesoDaCarga()
        << "Volume: " << dado.getVolumeDaCarga()
        << "Prioridade: " << dado.getPrioridade() << std::endl;
    }
}