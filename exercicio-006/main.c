// Desenvolva um algoritmo que peça para que o usuário informe a base e a altura de um retângulo, e um terceiro número inteiro "op". Caso o usuário escolha "op" igual a 0, calcule e mostre o perímetro do retângulo. Caso o usuário insira um valor 1 para "op", calcule e mostre a área do retângulo. Se o usuário inserir um valor diferente de 0 e 1 para "op", mostrar a mensagem "Opção inválida.".

#include <stdio.h>

int main(void) {

    double base_retangulo, altura_retangulo, perimetro_retangulo, area_retangulo;
    int op;

    printf("Digite a base do retangulo (em cm):\n");
    scanf("%lf", &base_retangulo);

    printf("Digite a altura do retangulo (em cm):\n");
    scanf("%lf", &altura_retangulo);

    printf("Digite uma opcao (0 - perimetro, 1 - area):\n");
    scanf("%d", &op);

    switch (op) {
        case 0:
            perimetro_retangulo = 2 * (base_retangulo + altura_retangulo);
            printf("O perimetro do retangulo e de %lfcm", perimetro_retangulo);
            break;
        case 1:
            area_retangulo = base_retangulo * altura_retangulo;
            printf("A area do retangulo e de %lfcm2", area_retangulo);
            break;
        default:
            printf("Opcao invalida!");
    }

    return 0;

}