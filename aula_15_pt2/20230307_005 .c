
#include <stdio.h>

int maior(int *vetor[10], int *val1, int *val2, int *val3){
    int cont, cont2, *temp, *vet1=vetor;
    for (cont = 0; cont < 2; cont++){
        //printf("%d ", vet1[cont]);
        for (cont2 = 0; cont2 < 2; cont2++){
            if (vet1[cont] > vet1[cont2 + 1]){
                temp = vet1[cont];
                vet1[cont] = vet1[cont2 + 1];
                vet1[cont2+1] = temp;
            }
        }
        
    }
    *val1 = vet1[0];
    *val2 = vet1[1];
    *val3 = vet1[2];
    return 1;
}

int main() {
    int val1, val2, val3, *pval1 = &val1, *pval2 = &val2, *pval3 = &val3, pvet[10];

    printf("digite o valor 1, 2, e 3: ");
    scanf("%d %d %d", pval1, pval2, pval3);
    pvet[0] = *pval1;
    pvet[1] = *pval2;
    pvet[2] = *pval3; 
    maior(pvet, pval1, pval2, pval3);
    printf("ordem crescente: %d %d %d", val1, val2, val3);
}
