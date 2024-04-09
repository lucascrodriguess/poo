#include <iostream>
#pragma once

class Cliente {

    private:
        std::string nome;
        int cpf;
        int telefone;
        std::string endereco;
        std::string email;

    public:
        Cliente ();
        Cliente (std::string nome, int cpf, int telefone, std::string endereco, std::string email);
        ~Cliente ();

        int setNome (std::string nome);
        int setCPF (int cpf);
        int setTelefone (int telefone);
        int setEndereco (std::string endereco);
        int setEmail (std::string email);

        std::string getNome ();
};
