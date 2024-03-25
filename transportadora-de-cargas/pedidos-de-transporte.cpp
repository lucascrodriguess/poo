#include <iostream>
#include "clientes.cpp"
#include "veiculos.cpp"

using namespace std;

class Pedido {

//atributos
private:
    int numeroDoPedido;
    Cliente* pessoa;
    Veiculo* veiculo;
    string localDeColeta;
    string localDeEntrega;
    int pesoDaCarga;
    int volumeDaCarga;

//metodos set
    public:
        void setNumeroDoPedido (int numeroDoPedido){
            this->numeroDoPedido = numeroDoPedido;
        }
        void setPessoa (Cliente* pessoa){
            this->pessoa = pessoa;
        }
        void setVeiculo (Veiculo* veiculo){
            this->veiculo = veiculo;
        }
        void setLocalDeColeta (string localDeColeta){
            this->localDeColeta = localDeColeta;
        }
        void setLocalDeEntrega (string localDeEntrega){
            this->localDeEntrega = localDeEntrega;
        }
        void setPesoDaCarga (int pesoDaCarga){
            this->pesoDaCarga = pesoDaCarga;
        }
        void setVolumeDaCarga (int volumeDaCarga){
            this->volumeDaCarga = volumeDaCarga;
        }

//metodos get
        int getNumeroDoPedido (){
            return numeroDoPedido;
        }
        Cliente* getPessoa (){
            return pessoa;
        }
        Veiculo* getVeiculo (){
            return veiculo;
        }
        string getLocalDeColeta (){
            return localDeColeta;
        }
        string getLocalDeEntrega (){
            return localDeEntrega;
        }
        int getPesoDaCarga (){
            return pesoDaCarga;
        }
        int getVolumeDaCarga (){
            return volumeDaCarga;
        }

//construtor
        Pedido (int numero, Cliente* pessoa, Veiculo* veiculo, string coleta, string entrega, int peso, int volume){
            setNumeroDoPedido (numero);
            setPessoa (pessoa);
            setVeiculo (veiculo);
            setLocalDeColeta (coleta);
            setLocalDeEntrega (entrega);
            setPesoDaCarga (peso);
            setVolumeDaCarga (volume);
        }

//metodos
        void mostrarPedido (){
            cout << "Pedido: ";
        }
};
