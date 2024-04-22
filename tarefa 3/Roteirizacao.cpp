#include "Roteirizacao.h"

    Roteirizacao::Roteirizacao (Pedido* pedido, GerenciadorVeiculos* listaVeiculos)
    {
        this->pedido = pedido;
        this->listaVeiculos = listaVeiculos;
        caminhaoEscolhido = NULL;
        pesoVeiculos = 0;
        localAtualLatitude = 0;
        localAtualLongitude = 0;
    }

    int Roteirizacao::checarTransporteNecessario ()
    {
        pesoVeiculos = 0;

        for (list<Veiculo>::iterator it = pedido -> getVeiculos() -> getLista() -> begin(); it != pedido -> getVeiculos() -> getLista() -> end(); it++)
        {
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

        for (list<Veiculo>::iterator it = listaVeiculos -> getLista() -> begin(); it != listaVeiculos -> getLista() -> end(); it++)
        {
            if (it -> getCategoria() == "Caminhao" && it -> getCapacidadeDeCarga() >= pesoVeiculos)
                caminhaoEscolhido = addressof(*it);
        }

        if (caminhaoEscolhido == NULL)
        {
            caminhaoEscolhido = new Caminhao ("Caminhao", pesoVeiculos);
            listaVeiculos -> adicionarVeiculo(caminhaoEscolhido);
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
                cout << "A distancia entre o veiculo atual e o proximo e de " << calculaDistancia (it -> getLocalizacaoLatitude(), it -> getLocalizacaoLongitude(), next(it) -> getLocalizacaoLatitude(), next(it) -> getLocalizacaoLongitude()) << " km\n";
            }
            
            if (next(it) != pedido -> getVeiculos() -> getLista() -> end() && next(it) -> getLocalizacaoLatitude() == 0)
                cout << "Nao e possivel determinar a distancia entre o local atual e o local do proximo veiculo\n";
        }

        cout << "A distancia entre o ultimo veiculo da lista e o destino final e de " << calculaDistancia (localAtualLatitude, localAtualLongitude, pedido -> getLocalDeEntregaLatitude(), pedido -> getLocalDeEntregaLongitude()) << " km\n";
    }

    void Roteirizacao::setLocalAtualLatitude (double localAtualLatitude)
    {
        this->localAtualLatitude = localAtualLatitude;
    }

    void Roteirizacao::setLocalAtualLongitude (double localAtualLongitude)
    {
        this->localAtualLongitude = localAtualLongitude;    
    }

    