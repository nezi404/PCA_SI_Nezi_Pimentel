#include <stdio.h>

// 20221215_008.  Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.

int main() {
    float fire, cel;
    printf("Temperatura em celsius: ");
    scanf("%f", &cel);
    fire = ((cel)*9/5) + 32;
    printf("%0.1f graus celsius são %0.1f graus Farenheit", cel, fire);
}
