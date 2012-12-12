/* 
 * File:   pessoal.h
 * Author: Rafael Penna
 *
 * Created on 6 de Dezembro de 2012, 18:17
 */

#ifndef PESSOAL_H
#define    PESSOAL_H

#include <iostream>
#include <string>

using namespace std;

//Somente os construtores são implementados aqui. Agora eles estão compilando.
class Pessoa
{
    string nome;
public:
    Pessoa(string name){
        nome = name;
    }
    string getName();
};

class Medico : public Pessoa {
    string especialidade;
public:
    Medico(string esp, string name) : Pessoa(name){
        especialidade = esp;
    }
    string getEsp();
};

class Paciente : public Pessoa {
    int idade;
    string endereco;
    string telefone;
public:
    Paciente(int age, string adress, string phone, string name) : Pessoa(name) {
        idade = age;
        endereco = adress;
        telefone = phone;
    }
    int getAge();
    string getAdress();
    string getPhone();
};

#endif	/* PESSOAL_H */
