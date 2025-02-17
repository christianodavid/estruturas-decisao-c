// Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem que segue a tabela abaixo. Para alunos de exame, calcule e mostre a nota que deverá ser tirada no exame para aprovação, considerando que a média no exame é 6,0. Média aritmética 0,0 ~ 3,0: Reprovado; Média aritmética 3,0 ~ 7,0: Exame; Média aritmética 7,0 ~ 10,0: Aprovado.

#include <stdio.h>

int main(void) {

    double nota1, nota2, nota3, media_aritmetica, exame_final;

    printf("Digite a primeira nota:\n");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%lf", &nota2);

    printf("Digite a terceira nota:\n");
    scanf("%lf", &nota3);

    media_aritmetica = (nota1 + nota2 + nota3) / 3;

    if (media_aritmetica >= 7.0) {
        printf("Media: %.2lf \n", media_aritmetica);
        printf("Aprovado");
    } else if (media_aritmetica >= 3.0) {
        printf("Media: %.2lf \n", media_aritmetica);
        printf("Exame final\n");
        exame_final = 12 - media_aritmetica;
        printf("O aluno devera tirar %.2lf", exame_final);
    } else {
        printf("Media: %.2lf \n", media_aritmetica);
        printf("Reprovado");
    }

    return 0;

}
