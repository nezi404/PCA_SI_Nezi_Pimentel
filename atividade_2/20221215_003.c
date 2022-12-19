#include <stdio.h>

//20221215_003. Faça um Programa que converta metros para centímetros.


int main() {
    float prim;
    int resul;
    printf("Insira o número para a converção em cm: ");
    scanf("%f", &prim);
    resul = prim*100;
    printf("%0.2f metros é/são %d cm ",prim,resul);
}
