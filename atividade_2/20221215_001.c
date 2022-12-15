#include <stdio.h>

int main() {
    int prim, seg, resul;
    printf("primeiro numero para a soma ");
    scanf("%d", &prim);
    printf("segundo numero para a soma ");
    scanf("%d", &seg);
    resul = prim + seg;
    printf("O valor da soma eh %0.2d", resul);
}
