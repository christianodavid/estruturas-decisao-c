//Desenvolva um algoritmo que peça ao usuário que informe os coeficientes a, b e c de uma equação de segundo grau: ax² + bx + c. Com base na Fórmula de Bhaskara, calcule e mostre as raízes da respectiva equação de segundo grau.

#include <math.h>
#include <stdio.h>

int main(void) {

    int a, b, c, delta;
    double x1, x2;

    printf("Digite o coeficiente a: \n");
    scanf("%d", &a);

    printf("Digite o coeficiente b: \n");
    scanf("%d", &b);

    printf("Digite o coeficiente c: \n");
    scanf("%d", &c);

    delta = pow(b, 2) - (4 * a * c);

    if (delta < 0) {
        printf("Raizes fora do dominio dos numeros reais.");
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raiz x': %lf\n", x1);
        printf("Raiz x'': %lf", x2);
    }

    return 0;

}