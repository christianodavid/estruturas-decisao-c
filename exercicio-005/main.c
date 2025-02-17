// Desenvolva um algoritmo que simule uma calculadora. Você deve dar a opção de o usuário escolher entre: 1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir. O usuário só conseguirá processar dois números inteiros por vez.

#include <stdio.h>

int main(void) {

    double num1, num2, adicao, subtracao, multiplicacao, divisao;
    int opcao;

    printf("Digite o primeiro numero:\n");
    scanf("%lf", &num1);

    printf("Digite o segundo numero:\n");
    scanf("%lf", &num2);

    printf("Digite uma opcao (1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir):\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            adicao = num1 + num2;
            printf("%lf + %lf = %lf", num1, num2, adicao);
            break;
        case 2:
            subtracao = num1 - num2;
            printf("%lf - %lf = %lf", num1, num2, subtracao);
            break;
        case 3:
            multiplicacao = num1 * num2;
            printf("%lf * %lf = %lf", num1, num2, multiplicacao);
            break;
        case 4:
            if (num2 == 0) {
                printf("O divisor nao pode ser 0.");
            } else {
                divisao = num1 / num2;
                printf("%lf / %lf = %lf", num1, num2, divisao);
            }
            break;
        default:
            printf("Opcao invalida. Digite um numero entre 1 e 4.");
    }

    return 0;
}
