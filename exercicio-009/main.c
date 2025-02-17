//  Faça um programa que receba três números distintos e mostre-os em ordem crescente.

#include <stdio.h>

int main(void) {

    double num1, num2, num3, temp;

    printf("Digite o primeiro numero:\n");
    scanf("%lf", &num1);

    printf("Digite o segundo numero:\n");
    scanf("%lf", &num2);

    printf("Digite o terceiro numero:\n");
    scanf("%lf", &num3);

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Ordem crescente: %lf - %lf - %lf", num1, num2, num3);

    return 0;

}