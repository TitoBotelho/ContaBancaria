/*
Para rodar o código:
g++ main.cpp conta.cpp contaEspecial.cpp contaCorrente.cpp contaPoupanca.cpp contaSalario.cpp -o main

./main
*/

#include <iostream>
#include <string>
#include "conta.h"
#include "contaEspecial.h"
#include "contaCorrente.h"
#include "contaPoupanca.h"
#include "contaSalario.h"

int main() {
    ContaCorrente corrente(1234, "João da Silva", 1000.0);
    ContaPoupanca poupanca(5678, "Maria Souza", 5000.0);
    ContaSalario salario(9012, "Pedro Oliveira", 2000.0);
    ContaEspecial especial(4022, "Paula Tejano", 400.0);

    corrente.exibirConta();
    std::cout << std::endl;

    poupanca.exibirConta();
    std::cout << std::endl;

    salario.exibirConta();
    std::cout << std::endl;

    especial.exibirConta();
    std::cout << std::endl;


    return 0;
}
