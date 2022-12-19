#include <stdio.h>

int main() {
    float fire, cel;
    printf("Temperatura em Fareheit: ");
    scanf("%f", &fire);
    cel = (5 * (fire - 32)/9);
    printf("%0.1f graus são %0.1f graus celseius", fire, cel);
}
