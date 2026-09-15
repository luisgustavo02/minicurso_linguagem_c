#include<stdio.h>

typedef struct{
    char titular[50];
    float saldo;
} Conta;

void deposita(Conta *c, float valor){
    c->saldo += valor;   // O mesmo que (*c).saldo += valor
}

int saca(Conta *c, float valor){
    if (valor > c->saldo){
        return 0;
    }

    c->saldo -= valor;
    return 1;
}

int main(){
    Conta conta = {"Maria", 100.0};

    printf("Saldo inicial de %s: R$ %.2f\n", conta.titular, conta.saldo);

    deposita(&conta, 50.0);
    printf("Apos deposito de R$ 50.00: R$ %.2f\n", conta.saldo);

    if (!saca(&conta, 200.0)){
        printf("Saque de R$ 200.00 negado: saldo insuficiente\n");
    }

    if (saca(&conta, 30.0)){
        printf("Apos saque de R$ 30.00: R$ %.2f\n", conta.saldo);
    }

    return 0;
}