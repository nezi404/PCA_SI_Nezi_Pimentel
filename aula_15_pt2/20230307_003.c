// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int valorint = 1, *valorp = &valorint;
    char abacaxi[40]= "abacaxi", resp[2] = "s", *abap = abacaxi, *respp = &resp;
    float numf = 2.4, *pnumf = &numf;
    while (strcmp("s", resp) == 0){
        printf("Valor string: %s \n", abap);
        scanf("%s", abap);
        printf("Valor atual da string: %s \n", abap);
        printf("Valor do inteiro: %d \n", valorint);
        scanf("%d", &valorint);
        printf("Valor atual do inteiro: %d \n",*pnumf);
        printf("Valor do float: %f \n", *pnumf);
        scanf("%f", pnumf);
        printf("Valor atual do float: %f \n", *pnumf);
        printf("continuar a troca de valores?\n");
        scanf("%s",respp);
    }
    return 0;

}
