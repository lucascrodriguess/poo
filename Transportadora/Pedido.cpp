#include "Pedido.h"

using namespace std;

    int Pedido::numeroDoPedidoGeral = 0;

    Pedido::Pedido(){}

    Pedido::~Pedido(){}

    Pedido::Pedido (Cliente *cliente, int pesoDaCarga, double localDeEntregaLatitude, double localDeEntregaLongitude){
        setNumeroDoPedido();
        setCliente(cliente);
        veiculos = new GerenciadorVeiculos;
        setLocalDeEntregaLatitude(localDeEntregaLatitude);
        setLocalDeEntregaLongitude(localDeEntregaLongitude);
        setPesoDaCarga(pesoDaCarga);
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

    int Pedido::setLocalDeEntregaLatitude (double localDeEntregaLatitude){
        this->localDeEntregaLatitude = localDeEntregaLatitude;
        return 1;
    }    

    int Pedido::setLocalDeEntregaLongitude (double localDeEntregaLongitude){
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
    GerenciadorVeiculos *Pedido::getVeiculos (){
        return veiculos;
    }
    double Pedido::getLocalDeEntregaLatitude (){
        return localDeEntregaLatitude;
    }
    double Pedido::getLocalDeEntregaLongitude (){
        return localDeEntregaLongitude;
    }
    int Pedido::getPesoDaCarga (){
        return pesoDaCarga;
    }
    int Pedido::getVolumeDaCarga (){
        return volumeDaCarga;
    }

    ostream& operator<<(ostream& out, Pedido *pedido) {
        out << "Pedido: #" << setfill('0') << setw(4) << pedido->getNumeroDoPedido() << 
        "\nCliente: " << pedido->getPessoa() <<
        "\nEntrega Latitude: " << pedido->getLocalDeEntregaLatitude() << 
        "\nEntrega Longitude: " << pedido->getLocalDeEntregaLongitude() << 
        "\nPeso: " << pedido->getPesoDaCarga() << "kg" << 
        "\nLongitude: " << pedido->getVolumeDaCarga(); 
        return out;
    }
