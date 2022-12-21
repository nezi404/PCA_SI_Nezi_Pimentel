/*
20222220001 Faça um programa que leia do teclado cinco números e imprima
na tela a soma destes cinco números. O programa só pode utilizar 2 (duas) variáveis.
*/

#include <stdio.h>

int main() {
    int num, resul = 0;
    printf("Numero inteiro: ");
    scanf("%d", &num);
    resul = num + resul;  
    printf("Número inteiro: ");
    scanf("%d", &num);
    resul = num + resul;
    printf("Número inteiro: ");
    scanf("%d", &num);
    resul = num + resul;
    printf("Número inteiro: ");
    scanf("%d", &num);
    resul = num + resul;
    printf("Número inteiro: ");
    scanf("%d", &num);
    resul = num + resul;
    printf("O resultado da soma eh: %d",resul);

    return 0;
}
