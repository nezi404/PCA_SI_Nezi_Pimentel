#include <stdio.h>

/* 
20221215_011.  Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda,
8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
salário bruto.
Quanto pagou ao INSS.
quanto pagou ao sindicato.
o salário líquido (Salário Líquido = Salário Bruto - Descontos)
*/

int main() {
    float sal_hor, hor, sal, ir, inss, sin, salliq; 
    printf("Quanto vc ganha por hora?");
    scanf("%f", &sal_hor);
    printf("Quantas horas você trabalha?");
    scanf("%f", &hor);
    sal = hor * sal_hor;
    sin = sal * 0.05;
	ir = sal * 0.11;
    inss = sal * 0.08;
    salliq = sal - ir -inss -sin;
    printf("SALARIO BRUTO:  R$%0.2f\nPAGO AO INSS: R$%0.2f\nVALOR PAGO AO SINDICADO: R$%0.2f\nSALARIO LIQUIDO : R$%0.2f\n", sal, inss, sin,salliq);
}
