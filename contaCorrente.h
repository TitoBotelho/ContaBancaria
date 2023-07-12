#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include "conta.h"

class ContaCorrente : public Conta {
public:
    ContaCorrente(int num, const std::string& tit, float sal);
    void exibirConta() override;
};

#endif  // CONTA_CORRENTE_H
