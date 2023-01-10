#include <stdio.h>

// 20221215_002. Faça um Programa que peça as 4 notas bimestrais e mostre a média.

int main() {
    float prim, seg, ter, qua, resul;
    printf("primeira nota ");
    scanf("%f", &prim);
    printf("segunda nota ");
    scanf("%f", &seg);
    printf("terceira nota ");
    scanf("%f", &ter);
    printf("quarta nota ");
    scanf("%f", &qua);
    resul = (prim + seg + ter + qua)/4;
    printf("O valor da media é %0.2f", resul);
}
