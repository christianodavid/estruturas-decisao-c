// Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e dos dados necessários para executar cada operação. Suponha que o usuário não irá inserir valores inválidos. Menu de opções: 1. Somar dois números; 2. Raiz quadrada de um número.

#include <math.h>
#include <stdio.h>

int main(void) {

    double num1, num2, soma, raiz_quadrada;
    int opcao;

    printf("Menu de opcoes\n");
    printf("---------------\n");
    printf("1 - Somar dois numeros\n");
    printf("2 - Raiz quadrada de um numero\n");

    printf("Digite a opcao (1 ou 2):\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o primeiro numero:\n");
            scanf("%lf", &num1);

            printf("Digite o segundo numero:\n");
            scanf("%lf", &num2);

            soma = num1 + num2;

            printf("%lf + %lf = %lf", num1, num2, soma);
            break;
        case 2:
            printf("Digite um numero:\n");
            scanf("%lf", &num1);

            raiz_quadrada = sqrt(num1);

            printf("Raiz quadrada de %lf = %lf", num1, raiz_quadrada);
            break;
        default:
            printf("Opcao invalida.");
    }

    return 0;

}