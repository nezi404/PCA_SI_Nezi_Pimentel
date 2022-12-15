#include <stdio.h>

int main() {
    float sal_hor, hor, sal, ir, inss, sin, salliq; 
    printf("Quanto vc ganha por hora?");
    scanf("%", &sal_hor);
    printf("Quanto vc ganha por hora?");
    scanf("%", &hor);
    sal = hor * sal_hor;
    sin = sal * 0.5;
	ir = sal * 0.11;
    inss = sal * 0.8;
    salliq = sal - ir -inss -sin;
    printf("SALARIO BRUTO:  R$%0.2f\nPAGO AO INSS: R$%0.2f\nVALOR PAGO AO SINDICADO: R$%0.2f\nSALARIO LIQUIDO : R$%0.2f\n", (sal, inss, sin,salliq));
}



// search for answer while in ooping
