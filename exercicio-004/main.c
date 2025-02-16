// Desenvolva um algoritmo que receba dois números, calcule e mostre a multiplicação entre eles, se ambos forem iguais. Caso o primeiro seja maior que o segundo, mostre a subtração do primeiro pelo segundo. Caso contrário, mostre a soma entre os dois.

#include <stdio.h>

int main(void) {

    double num1, num2, multiplicacao, subtracao, adicao;

    printf("Digite o primeiro numero:\n");
    scanf("%lf", &num1);

    printf("Digite o segundo numero:\n");
    scanf("%lf", &num2);

    if (num1 == num2) {
        multiplicacao = num1 * num2;
        printf("%lf * %lf = %lf", num1, num2, multiplicacao);
    } else if (num1 > num2) {
        subtracao = num1 - num2;
        printf("%lf - %lf = %lf", num1, num2, subtracao);
    } else {
        adicao = num1 + num2;
        printf("%lf + %lf = %lf", num1, num2, adicao);
    }

    return 0;

}