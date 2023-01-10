#include <stdio.h>

/*
20221215_007.  Faça um Programa que peça a temperatura em graus Farenheit,
transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).
*/

int main() {
    float fire, cel;
    printf("Temperatura em Fareheit: ");
    scanf("%f", &fire);
    cel = (5 * (fire - 32)/9);
    printf("%0.1f graus são %0.1f graus celsius", fire, cel);
}
