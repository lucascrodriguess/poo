#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include "ListaClientes.h"
#include "ListaPedidos.h"
#include "Cliente.h"
#include "Pedido.h"

class Dados {
private:
    ListaClientes *listaClientes;
    ListaPedidos *listaPedidos;

public:
    Dados(ListaClientes *listaClientes, ListaPedidos *listaPedidos);
    ~Dados();

    void setListaClientes(ListaClientes *listaClientes);
    void setListaPedidos(ListaPedidos *listaPedidos);

    void LerArquivoCSV(const std::string arquivo); 
    void SeparaeArmazenaDados(const std::string linha, char x);   
    std::string ArrumaLinha(std:: ifstream &x, string line);                        
};