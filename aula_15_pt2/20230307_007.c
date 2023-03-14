// Online C compiler to run C program online
#include <stdio.h>

int ordem(int *vetor[], int *val1, int *val2){
    int i, *vet = vetor;
    for(i=0; i<15; i++){
        if (*val2 < vet[i]){
            printf("mudou o maior\n");
            *val2 = vet[i];
        }
        if (*val1 > vet[i]){
            printf("mudou o menor\n");
            *val1 = vet[i];
        }
    }

}

int main() {
    int vet[]={10, 1, 4, 6, 3, 45, 30, -1, -5, 2, 14, 15, 8, 9, 7};
    int menor=0, maior=0, *pval1 = &menor, *pval2 = &maior;
    
    ordem(&vet, pval1, pval2);
    printf("maior %d e menor %d", maior, menor);
    
}
