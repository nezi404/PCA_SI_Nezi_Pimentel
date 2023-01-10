#include <stdio.h>

/* 20221215_006.  Faça um Programa que pergunte quanto você ganha por hora e
o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
*/

int main() {
    float sal_hor, hor, sal; 
    printf("Quanto vc ganha por hora?");
    scanf("%f", &sal_hor);
    printf("Quantas horas você trabalha no mês?");
    scanf("%f", &hor);
    sal = hor * sal_hor ;
    
    printf("Salário do mês:  R$%0.2f", sal);
}
