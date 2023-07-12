#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include "conta.h"

class ContaPoupanca : public Conta {
public:
    ContaPoupanca(int num, const std::string& tit, float sal);
    void exibirConta() override;
};

#endif  // CONTA_POUPANCA_H
