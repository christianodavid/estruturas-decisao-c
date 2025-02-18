// Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga esta regra. Mostre, em seguida, os quatro números em ordem não-crescente.

#include <stdio.h>

int main(void) {

    double num1, num2, num3, num4;

    printf("Digite o primeiro numero:\n");
    scanf("%lf", &num1);

    printf("Digite o segundo numero:\n");
    scanf("%lf", &num2);

    printf("Digite o terceiro numero:\n");
    scanf("%lf", &num3);

    if ((num1 > num2) || (num2 > num3)) {
        printf("Os numeros devem estar em ordem crescente.");
        return 1;
    }

    printf("Digite o quarto numero:\n");
    scanf("%lf", &num4);

    printf("Numeros em ordem nao-crescente:\n");

    if (num4 > num3) {
        printf("%lf - %lf - %lf - %lf", num4, num3, num2, num1);
    }

    if ((num4 > num2) && (num4 <= num3)) {
        printf("%lf - %lf - %lf - %lf", num3, num4, num2, num1);
    }

    if ((num4 > num1) && (num4 <= num2)) {
        printf("%lf - %lf - %lf - %lf", num3, num2, num4, num1);
    }

    if (num4 <= num1) {
        printf("%lf - %lf - %lf - %lf", num3, num2, num1, num4);
    }

    return 0;

}