// Desenvolva um algoritmo que receba três números. O algoritmo deve imprimir "Condição satisfeita", na tela, caso o primeiro dado inserido seja maior do que os outros dois (o primeiro não pode ser igual a nenhum). Caso contrário, deve ser impressa a mensagem: "Erro".

#include <stdio.h>

int main(void) {

    double num1, num2, num3;

    printf("Digite o primeiro numero:\n");
    scanf("%lf", &num1);

    printf("Digite o segundo numero:\n");
    scanf("%lf", &num2);

    printf("Digite o terceiro numero:\n");
    scanf("%lf", &num3);

    if ((num1 > num2) && (num1 > num3)) {
        printf("Condicao satisfeita!");
    } else {
        printf("Erro.");
    }

    return 0;

}