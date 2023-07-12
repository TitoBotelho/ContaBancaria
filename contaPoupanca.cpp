#include "contaPoupanca.h"
#include <iostream>

ContaPoupanca::ContaPoupanca(int num, const std::string& tit, float sal) : Conta(num, tit, sal) {}

void ContaPoupanca::exibirConta() {
    std::cout << "Conta Especial" << std::endl;
    std::cout << "Número: " << numero << std::endl;
    std::cout << "Titular: " << titular << std::endl;
    std::cout << "Saldo: R$" << saldo << std::endl;
}
