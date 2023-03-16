// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

void *mediaDesvio(float *vetor, float **tam, float **med, float **des ){
    float value=0, *pvalue = &value;
    int j;
    for(j=0;j<**tam;j++){
        *pvalue += *(vetor+j);
    }
    
    
    **med = (*pvalue)/(**tam);
    printf("Valores somados %f", value);
        printf("Valores media %f", *med);

}
int main() {
    float *vet, nota, *media, *desvio, tam,*ptam=&tam;
    int  i;
    printf("Quantos alunos?\n"),
    scanf("%f", &tam );
    vet = malloc(tam* sizeof(float));
    if (vet != NULL){
        printf("Alocação de memoria executada com sucesso");
        for (i=0; i<tam; i++){
            printf("Nota do aluno %d: ", i+1);
            scanf("%f", &nota);
            *(vet+i)=nota;
            printf("nota %f\n", *(vet+i));
        }
        mediaDesvio(vet, &ptam, &media, &desvio);
        printf("Valores media fora da funcao %f", media);
        
    }
    else{
        printf("Falha na alocação de memoria");
    }
    
}
