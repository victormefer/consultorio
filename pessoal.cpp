#include <iostream>
#include <string>

#include "pessoal.h"

using namespace std;

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
