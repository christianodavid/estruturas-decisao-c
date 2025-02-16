// Faça um programa que receba um número inteiro e verifique se esse número é par ou ímpar.

#include <stdio.h>

int main(void) {

    int num;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O numero %d e par!", num);
    } else {
        printf("O numero %d e impar!", num);
    }

    return 0;

}