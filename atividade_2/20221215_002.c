#include <stdio.h>

int main() {
    int prim, seg, ter, qua, resul;
    printf("primeira nota ");
    scanf("%d", &prim);
    printf("segunda nota ");
    scanf("%d", &seg);
    printf("terceira nota ");
    scanf("%d", &ter);
    printf("quarta nota ");
    scanf("%d", &qua);
    resul = prim + seg + ter + qua;
    printf("O valor da soma eh %0.2d", resul);
}
