#ifndef PESSOAL_H
#define    PESSOAL_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa
{
    string nome;
public:
    Pessoa(string name);
    string getName();
};

class Medico : public Pessoa {
    string especialidade;
public:
    Medico(string esp);
    string getEsp();
};

class Paciente : public Pessoa {
    int idade;
    string endereco;
    string telefone;
public:
    Paciente(int age, string adress, string phone);
    int getAge();
    string getAdress();
    string getPhone();
};

//oi

#endif	/* PESSOAL_H */
