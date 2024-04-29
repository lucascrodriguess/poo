#include "Roteirizacao.h"

    Roteirizacao::Roteirizacao(Pedido* pedido, GerenciadorVeiculos* listaVeiculos) {
        this->pedido = pedido;
        this->listaVeiculos = listaVeiculos;
        veiculoEscolhido = NULL;
        pesoVeiculos = 0;
        localAtualLatitude = 0;
        localAtualLongitude = 0;
    }

    int Roteirizacao::checarTransporteNecessario() {
        pesoVeiculos = 0;

        for (list<Veiculo>::iterator it = pedido -> getVeiculos() -> getLista() -> begin(); it != pedido -> getVeiculos() -> getLista() -> end(); it++) {
            if (it -> getPeso() == 0)
                cout << "Um dos veiculos nao possui peso definido\n";

            pesoVeiculos += it -> getPeso();
        }
        cout << "E necessario um caminhao capaz de transportar ao menos " << pesoVeiculos << " kg\n";

        return pesoVeiculos;
    }

    void Roteirizacao::definirCaminhao ()
    {
        pesoVeiculos = checarTransporteNecessario();

        for (list<Veiculo>::iterator it = listaVeiculos -> getLista() -> begin(); it != listaVeiculos -> getLista() -> end(); it++) {
            if (it->getCapacidadeDeCarga() >= pesoVeiculos) {
                veiculoEscolhido = addressof(*it);
                break;
            }
        }

        if (veiculoEscolhido == NULL) {
            veiculoEscolhido = new Veiculo("Categoria", "Algum", 2100, 2020, 50, pesoVeiculos, 0.0, 0.0);
            listaVeiculos -> adicionarVeiculo(veiculoEscolhido);
        }
    }

    double Roteirizacao::calculaDistancia (double latitudeOrigem, double longitudeOrigem, double latitudeDestino, double longitudeDestino)
    {
        latitudeOrigem = latitudeOrigem * (M_PI/180);
        longitudeOrigem = longitudeOrigem * (M_PI/180);
        latitudeDestino = latitudeDestino * (M_PI/180);
        longitudeDestino = longitudeDestino * (M_PI/180);

        return (2 * 6371 * asin(sqrt(pow(sin(latitudeDestino - latitudeOrigem)/2, 2) + cos(latitudeOrigem)*cos(latitudeDestino) * pow(sin((longitudeDestino - longitudeOrigem)/2),2))));    
    }

    void Roteirizacao::roteiriza (){
    
        for (list<Veiculo>::iterator it = pedido -> getVeiculos() -> getLista() -> begin(); it != pedido -> getVeiculos() -> getLista() -> end(); it++)
        {
            if (it -> getLocalizacaoLatitude() != 0)
            {
                localAtualLatitude = (it -> getLocalizacaoLatitude());
                localAtualLongitude = (it -> getLocalizacaoLongitude());
            }

            if (next(it) != pedido -> getVeiculos() -> getLista() -> end() && next(it) -> getLocalizacaoLatitude() != 0)
            {
                cout << "\nA distancia entre o veiculo atual eh o proximo e de " << calculaDistancia (it -> getLocalizacaoLatitude(), it -> getLocalizacaoLongitude(), next(it) -> getLocalizacaoLatitude(), next(it) -> getLocalizacaoLongitude()) << " km\n";
            }
            
            if (next(it) != pedido -> getVeiculos() -> getLista() -> end() && next(it) -> getLocalizacaoLatitude() == 0)
                cout << "\nNao eh possivel determinar a distancia entre o local atual e o local do proximo veiculo";
        }

        cout << "\nA distancia entre o ultimo veiculo da lista e o destino final eh de " << calculaDistancia (localAtualLatitude, localAtualLongitude, pedido -> getLocalDeEntregaLatitude(), pedido -> getLocalDeEntregaLongitude()) << " km\n";
    }

    void Roteirizacao::setLocalAtualLatitude (double localAtualLatitude)
    {
        this->localAtualLatitude = localAtualLatitude;
    }

    void Roteirizacao::setLocalAtualLongitude (double localAtualLongitude)
    {
        this->localAtualLongitude = localAtualLongitude;    
    }

    