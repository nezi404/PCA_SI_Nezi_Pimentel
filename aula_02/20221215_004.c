#include <stdio.h>
#include <math.h>

//20221215_004. Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.


int main (void){
    float raio, pi = 3.1415, area;
    printf("Qual é o raio do círculo? ");
    scanf("%f", &raio);
    area = pow(raio, 2) * pi;
    printf("A área do círculo é %0.2f", area);
    
}
