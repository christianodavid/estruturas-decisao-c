// Faça um programa que receba a hora de início de um jogo e a hora final do jogo (cada hora é composta por duas variáveis inteiras: hora e minuto). Calcule e mostre a duração do jogo (horas e minutos) sabendo-se que o tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte. Observação: utilizar o formato de hora que vai das 00hr00min até as 23hr29min.

#include <stdio.h>

int main(void) {

    int hora_inicial, minuto_inicial, hora_final, minuto_final, hora, minuto;

    printf("Digite os dados iniciais:\n");
    printf("Horas:\n");
    scanf("%d", &hora_inicial);
    printf("Minutos:\n");
    scanf("%d", &minuto_inicial);

    printf("Digite os dados finais:\n");
    printf("Horas:\n");
    scanf("%d", &hora_final);
    printf("Minutos:\n");
    scanf("%d", &minuto_final);

    if (minuto_inicial > minuto_final) {
        minuto_final += 60;
        hora_final -= 1;
    }

    if (hora_inicial > hora_final) {
        hora_final += 24;
    }

    minuto = minuto_final - minuto_inicial;
    hora = hora_final - hora_inicial;

    printf("Duracao: %dh%dmin", hora, minuto);

    return 0;

}