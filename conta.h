#ifndef CONTA_H
#define CONTA_H

#include <string>

class Conta {
protected:
    int numero;
    std::string titular;
    float saldo;
public:
    Conta(int num, const std::string& tit, float sal);
    virtual void exibirConta() = 0;
    virtual ~Conta();
};

#endif  // CONTA_H
