// Online C compiler to run C program online
#include <stdio.h>
int mat1[100], mat2[100], tam1, tam2;

int vet(int vetor[100], int tam){
    int i;
    
    for (i = 0; i < tam; i++ ){
        printf("Numero %d do vetor: ", i);
        scanf("%d", &vetor[i]);
        
    }
    for (i = 0; i < tam; i++){
        printf("%d  ", vetor[i]);
    }
    printf("\n");
    
}
int inter(int vet1[100], int vet2[100], int mat1tam, int mat2tam){
    int i, j, cont = 0;
    for (j = 0; j< mat1tam; j++){
        for (i = 0; i < mat2tam; i++){
            if (vet1[j]==vet2[i]){
            cont++;
            }
        }
    }
    int intersw[cont+1];
    cont=0;
    for (j = 0; j< mat1tam; j++){
        for (i = 0; i < mat2tam; i++){
            if (vet1[j]==vet2[i]){
            intersw[cont] = vet2[i];
            cont++;
            }
        }
    }
        printf("O tamanho da interseccao eh %d\n", cont );
        for (i = 0; i < cont; i++){
            printf("Numero do vetor interseccao eh %d\n", intersw[i]);
            }
        
    
    
}

int main() {
    int tam1 = 101, tam2 = 101, i;
    while (tam1 > 100 || tam2 > 100){
        printf("Qual o tamanho primeiro do vetor?  ");
        scanf("%d", &tam1);
        printf("Qual o tamanho segundo do vetor?  ");
        scanf("%d", &tam2);
    }
    vet(mat1, tam1);
    vet(mat2, tam2);
    
    
    inter(mat1, mat2, tam1, tam2);

    
}
