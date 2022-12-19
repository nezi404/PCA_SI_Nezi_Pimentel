#include <stdio.h>
#include <math.h>

/*
20221215_010. Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo
que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58
*/

int main() {
    float altura, peso_i;
    printf("Qual sua altura em metros? ");
    scanf("%f", &altura);
    peso_i = (72.7 * altura) - 58;
    printf("O peso ideal para %0.2f de altura é %0.2f kg",altura, peso_i);
}
