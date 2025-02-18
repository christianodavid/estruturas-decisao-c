// Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário desse funcionário, acrescido de bonificação e de auxílio-escola. Salário até 500,00: 5% de bonificação; Salário entre 500,01 e 1.200,00: 12% de bonificação; Salário acima de 1.200,00: Sem bonificação; Auxílio-escola até 600,00: 150,00; Auxílio-escola mais que 600,00: 100,00.

#include <stdio.h>

int main(void) {

    double salario, bonificacao, auxilio, salario_final;

    printf("Digite o salario:\n");
    scanf("%lf", &salario);

    if (salario <= 500.0) {
        bonificacao = salario * 0.05;
    } else if (salario <= 1200.0) {
        bonificacao = salario * 0.12;
    } else {
        bonificacao = 0;
    }

    if (salario <= 600.0) {
        auxilio = 150.0;
    } else {
        auxilio = 100.0;
    }

    salario_final = salario + bonificacao + auxilio;

    printf("Salario a receber: R$%.2lf", salario_final);

    return 0;

}