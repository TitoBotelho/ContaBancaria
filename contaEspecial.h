#ifndef CONTA_ESPECIAL_H
#define CONTA_ESPECIAL_H

#include "conta.h"

class ContaEspecial : public Conta {
public:
    ContaEspecial(int num, const std::string& tit, float sal);
    void exibirConta() override;
};

#endif  // CONTA_ESPECIAL_H
