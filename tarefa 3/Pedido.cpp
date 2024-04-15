#include "Pedido.h"

using namespace std;

    int Pedido::numeroDoPedidoGeral = 0;

    Pedido::Pedido (Cliente* cliente, float localDeColetaLatitude, float localDeColetaLongitude, float localDeEntregaLatitude, float localDeEntregaLongitude){
        setNumeroDoPedido();
        this->cliente = cliente;
        veiculos = new GerenciadorVeiculos;
        this->localDeColetaLatitude = localDeColetaLatitude;        
        this->localDeColetaLongitude = localDeColetaLongitude;
        this->localDeEntregaLatitude = localDeEntregaLatitude;
        this->localDeEntregaLongitude = localDeEntregaLongitude;
    }

    int Pedido::setNumeroDoPedido (){
        numeroDoPedidoGeral++;
        this->numeroDoPedido = numeroDoPedidoGeral;
        return 1;
    }
    int Pedido::setCliente (Cliente* cliente){
        this->cliente = cliente;
        return 1;
    }
    int Pedido::setVeiculo (Veiculo* veiculo){
        veiculos -> adicionarVeiculo(veiculo);
        return 1;
    }
    int Pedido::setLocalDeColetaLatitude (float localDeColetaLatitude){
        this->localDeColetaLatitude = localDeColetaLatitude;
        return 1;
    }
    int Pedido::setLocalDeColetaLongitude (float localDeColetaLongitude){
        this->localDeColetaLongitude = localDeColetaLongitude;
        return 1;
    }
    int Pedido::setLocalDeEntregaLatitude (float localDeEntregaLatitude){
        this->localDeEntregaLatitude = localDeEntregaLatitude;
        return 1;
    }    
    int Pedido::setLocalDeEntregaLongitude (float localDeEntregaLongitude){
        this->localDeEntregaLongitude = localDeEntregaLongitude;
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
        return cliente;
    }
    GerenciadorVeiculos* Pedido::getVeiculos (){
        return veiculos;
    }
    float Pedido::getLocalDeColetaLatitude (){
        return localDeColetaLatitude;
    }
    float Pedido::getLocalDeColetaLongitude (){
        return localDeColetaLongitude;
    }
    float Pedido::getLocalDeEntregaLatitude (){
        return localDeEntregaLatitude;
    }
    float Pedido::getLocalDeEntregaLongitude (){
        return localDeEntregaLongitude;
    }
    int Pedido::getPesoDaCarga (){
        return pesoDaCarga;
    }
    int Pedido::getVolumeDaCarga (){
        return volumeDaCarga;
    }

    void Pedido::mostrarPedido (){
        cout << "Pedido: " << setfill('0') << setw(4) << numeroDoPedido << "\n";
        cout << cliente -> getNome() << "\n";
        veiculos -> mostrarVeiculos();
        cout << getLocalDeColetaLatitude() << "\n";
        cout << getLocalDeColetaLongitude() << "\n";
        cout << getLocalDeEntregaLatitude() << "\n";
        cout << getLocalDeEntregaLongitude() << "\n";
        cout << getPesoDaCarga() << " kg \n";
        cout << getVolumeDaCarga() << "\n";
    }
