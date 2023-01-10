#include <stdio.h>
#include <math.h>

/*
20221215_009.  Faça um Programa que peça 2 números inteiros e um número real.
Calcule e mostre: o produto do dobro do primeiro com metade do segundo. a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.
*/

int main() {
    int num1, num2, resul3;
    float num3, resul1, resul2;
    printf("Primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Segundo número inteiro: ");
    scanf("%d", &num2);
    printf("Terceiro número: ");
    scanf("%f", &num3);
    resul1 = (2 * num1) * (num2/2);
    resul2 = (3 * num1 + num3); 
    resul3 = pow(num3, 3);
    printf("O produto do dobro do primeiro com metade do segundo: %0.2f\nA soma do triplo do primeiro com o terceiro %0.2f\nO terceiro elevado ao cubo: %d",resul1, resul2, resul3);
}
