#include <iostream>
#include <iomanip>
#include "Clientes.h"
#include "Veiculos.h"
#include "Pedidos.h"

using namespace std;

    Pedido::Pedido (int numero, Cliente* pessoa, Veiculo* veiculo, string coleta, string entrega, int peso, int volume){
        numeroDoPedido = numero;
        this->pessoa = pessoa;
        this->veiculo = veiculo;
        localDeColeta = coleta;
        localDeEntrega = entrega;
        pesoDaCarga = peso;
        volumeDaCarga = volume;
    }

    int Pedido::setNumeroDoPedido (int numeroDoPedido){
        this->numeroDoPedido = numeroDoPedido;
        return 1;
    }
    int Pedido::setPessoa (Cliente* pessoa){
        this->pessoa = pessoa;
        return 1;
    }
    int Pedido::setVeiculo (Veiculo* veiculo){
        this->veiculo = veiculo;
        return 1;
    }
    int Pedido::setLocalDeColeta (string localDeColeta){
        this->localDeColeta = localDeColeta;
        return 1;
    }
    int Pedido::setLocalDeEntrega (string localDeEntrega){
        this->localDeEntrega = localDeEntrega;
        return 1;
    }
    int Pedido::setPesoDaCarga (int pesoDaCarga){
        this->pesoDaCarga = pesoDaCarga;
        return 1;
    }
    int Pedido::setVolumeDaCarga (int volumeDaCarga){
        this->volumeDaCarga = volumeDaCarga;
        return 1;
    }


    int Pedido::getNumeroDoPedido (){
        return numeroDoPedido;
    }
    Cliente* Pedido::getPessoa (){
        return pessoa;
    }
    Veiculo* Pedido::getVeiculo (){
        return veiculo;
    }
    string Pedido::getLocalDeColeta (){
        return localDeColeta;
    }
    string Pedido::getLocalDeEntrega (){
        return localDeEntrega;
    }
    int Pedido::getPesoDaCarga (){
        return pesoDaCarga;
    }
    int Pedido::getVolumeDaCarga (){
        return volumeDaCarga;
    }

    void Pedido::mostrarPedido (){
        cout << "Pedido: " << setfill('0') << setw(4) << numeroDoPedido << "\n";
        cout << pessoa -> getNome() << "\n";
        cout << veiculo -> getModelo() << "\n";
        cout << getLocalDeColeta() << "\n";
        cout << getLocalDeEntrega() << "\n";
        cout << getPesoDaCarga() << " kg \n";
        cout << getVolumeDaCarga() << "\n";
    }
