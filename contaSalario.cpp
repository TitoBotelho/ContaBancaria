#include "contaSalario.h"
#include <iostream>

ContaSalario::ContaSalario(int num, const std::string& tit, float sal) : Conta(num, tit, sal) {}

void ContaSalario::exibirConta() {
    std::cout << "Conta Salário" << std::endl;
    std::cout << "Número: " << numero << std::endl;
    std::cout << "Titular: " << titular << std::endl;
    std::cout << "Saldo: R$" << saldo << std::endl;
}