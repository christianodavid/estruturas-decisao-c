// Faça um programa que receba dois números e mostre o maior deles. Caso eles sejam iguais, deve-se mostrar a mensagem "Os números são iguais".

#include <stdio.h>

int main(void) {

    double num1, num2;

    printf("Digite o primeiro numero:\n");
    scanf("%lf", &num1);

    printf("Digite o segundo numero:\n");
    scanf("%lf", &num2);

    if (num1 > num2) {
        printf("%lf e maior que %lf.", num1, num2);
    } else if (num1 < num2) {
        printf("%lf e maior que %lf.", num2, num1);
    } else {
        printf("%lf e igual a %lf.", num1, num2);
    }

    return 0;

}