// A nota final de um estudante é calculada a partir de três notas atribuídas respectivamente a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas anteriormente obedece aos pesos a seguir: Trabalho de laboratório: 2; Avaliação semestral: 3; Exame final: 4. Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito que segue a tabela a seguir: Média ponderada 8,0 ~ 10,0: Conceito A. Média ponderada 7,0 ~ 8,0: Conceito B. Média ponderada 6,0 ~ 7,0: Conceito C. Média ponderada 5,0 ~ 6,0: Conceito D. Média ponderada 0,0 ~ 5,0: Conceito E.

#include <stdio.h>

int main(void) {

    double nota_laboratorio, nota_avaliacao, nota_exame_final, media_ponderada;

    printf("Digite a nota do trabalho de laboratorio:\n");
    scanf("%lf", &nota_laboratorio);

    printf("Digite a nota da avaliacao semestral:\n");
    scanf("%lf", &nota_avaliacao);

    printf("Digite a nota do exame final:\n");
    scanf("%lf", &nota_exame_final);

    media_ponderada = ((nota_laboratorio * 2) + (nota_avaliacao * 3) + (nota_exame_final * 4)) / (2 + 3 + 4);

    if (media_ponderada >= 8.0) {
        printf("Media Ponderada: %.2lf \n", media_ponderada);
        printf("Conceito A");
    } else if (media_ponderada >= 7.0) {
        printf("Media Ponderada: %.2lf \n", media_ponderada);
        printf("Conceito B");
    } else if (media_ponderada >= 6.0) {
        printf("Media Ponderada: %.2lf \n", media_ponderada);
        printf("Conceito C");
    } else if (media_ponderada >= 5.0) {
        printf("Media Ponderada: %.2lf \n", media_ponderada);
        printf("Conceito D");
    } else {
        printf("Media Ponderada: %.2lf \n", media_ponderada);
        printf("Conceito E");
    }

    return 0;

}