
#include <stdio.h>

void troca(int *a, int *b){
    int current= *a;
    *a = *b;
    *b = current;
}
int main() {
    int a=1, b=2, *pa = &a, *pb = &b;
    printf("Antes da troca: %d b: %d\n\n", a, b);
    troca(pa, pb);
    printf("Depois da troca: %d b: %d", a, b);
}
