#include <stdio.h>

int main() {
    float sal_hor, hor, sal, ir, inss, sin, salliq; 
    printf("Quanto vc ganha por hora?");
    scanf("%f", &sal_hor);
    printf("Quantas horas você trabalha?");
    scanf("%f", &hor);
    sal = hor * sal_hor ;
    
    printf("Salário do mês:  R$%0.2f", sal);
}
