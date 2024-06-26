#include <iostream>
#pragma once

class Cliente {

    private:
        std::string nome;
        std::string cpf;
        int telefone;
        std::string endereco;
        std::string email;

    public:
        Cliente ();
        Cliente (std::string nome, std::string cpf, int telefone, std::string endereco, std::string email);
        ~Cliente ();

        int setNome (std::string nome);
        int setCPF (std::string cpf);
        int setTelefone (int telefone);
        int setEndereco (std::string endereco);
        int setEmail (std::string email);

        std::string getNome();
        std::string getCPF();
        int getTelefone();
        std::string getEndereco();
        std::string getEmail();

        friend std::ostream& operator<<(std::ostream& out, Cliente *cliente);;
};
