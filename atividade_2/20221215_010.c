#include <stdio.h>
#include <math.h>

int main() {
    float altura, peso_i;
    printf("Qual sua altura em metros? ");
    scanf("%f", &altura);
    peso_i = (72.7 * altura) - 58;
    printf("O peso ideal para %0.2f de altura é %0.2f kg",altura, peso_i);
}
