#include <iostream>
#include "usuario.cpp"

using namespace std;

int main (){

    Usuario meuUsuario;

        meuUsuario.setIdade (19);

        cout << "Minha idade: " << meuUsuario.getIdade() << endl;

    return 0;
}