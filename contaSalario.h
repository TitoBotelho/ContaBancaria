#ifndef CONTA_SALARIO_H
#define CONTA_SALARIO_H

#include "conta.h"

class ContaSalario : public Conta {
public:
    ContaSalario(int num, const std::string& tit, float sal);
    void exibirConta() override;
};

#endif  // CONTA_SALARIO_H
