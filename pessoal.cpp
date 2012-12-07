#include <iostream>
#include <string>

#include "pessoal.h"

using namespace std;

//Implementação dos construtores
//Não estão compilando

Pessoa::Pessoa(string name) {
    nome = name;
}

Medico::Medico(string esp) {
    especialidade = esp;
}

Paciente::Paciente(int age, string adress, string phone) {
    idade = age;
    endereco = adress;
    telefone = phone;
}

//Implementação dos métodos da classe Pessoa
string Pessoa::getName() {
    return nome;
}

//Implementação dos métodos da classe Médico
string Medico::getEsp() {
    return especialidade;
}

//Implementação dos métodos de Paciente
int Paciente::getAge(){
    return idade;
}

string Paciente::getAdress() {
    return endereco;
}

string Paciente::getPhone() {
    return telefone;
}