// Faça um programa que receba quatro valores, I, A, B e C. I é um valor inteiro e positivo e A, B e C são valores reais e distintos. Escreva os números A, B e C obedecendo à tabela a seguir. Supor que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3. Valor de I 1: A, B e C em ordem crescente; Valor de I 2: A, B e C em ordem decrescente; Valor de I 3: O maior fica entre os outros dois números.

#include <stdio.h>

int main(void) {

    double a, b, c, temp;
    int i;

    printf("Digite o primeiro numero (A):\n");
    scanf("%lf", &a);

    printf("Digite o segundo numero (B):\n");
    scanf("%lf", &b);

    printf("Digite o terceiro numero (C):\n");
    scanf("%lf", &c);

    printf("Digite a opcao (1, 2 ou 3):\n");
    scanf("%d", &i);

    switch (i) {
        case 1:
            if (a > b) {
                temp = a;
                a = b;
                b = temp;
            }
            if (b > c) {
                temp = b;
                b = c;
                c = temp;
            }
            if (a > b) {
                temp = a;
                a = b;
                b = temp;
            }
            printf("Ordem crescente: %lf - %lf - %lf\n", a, b, c);
            break;
        case 2:
            if (a < b) {
                temp = a;
                a = b;
                b = temp;
            }
            if (b < c) {
                temp = b;
                b = c;
                c = temp;
            }
            if (a < b) {
                temp = a;
                a = b;
                b = temp;
            }
            printf("Ordem decrescente: %lf - %lf - %lf\n", a, b, c);
            break;
        case 3:
            if (a >= b && a >= c) {
                temp = b;
                b = a;
                a = temp;
            } else if (c >= a && c >= b) {
                temp = b;
                b = c;
                c = temp;
            }
            if (a > c) {
                temp = a;
                a = c;
                c = temp;
            }
            printf("Maior no meio: %lf - %lf - %lf\n", a, b, c);
            break;
        default:
            printf("Opcao invalida.");
    }

    return 0;

}