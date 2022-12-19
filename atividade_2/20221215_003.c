#include <stdio.h>

int main() {
    int prim, resul;
    printf("Insira o número para a converção em cm: ");
    scanf("%d", &prim);
    resul = prim*100;
    printf("%d metros é/são %d cm ",prim,resul);
}
