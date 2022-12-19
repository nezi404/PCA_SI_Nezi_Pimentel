#include <stdio.h>

int main() {
    float fire, cel;
    printf("Temperatura em celsius: ");
    scanf("%f", &cel);
    fire = ((cel)*9/5) + 32;
    printf("%0.1f graus são %0.1f graus Farenheit", cel, fire);
}
