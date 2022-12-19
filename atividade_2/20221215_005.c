#include <stdio.h>

int main (void){
    float lado, area_dupla;
    printf("Qual é o tamanho do lado? ");
    scanf("%f", &lado);
    area_dupla = lado * lado * 2;
    printf("A área do quadrado vezes dois é %0.2f", area_dupla);
    
}
