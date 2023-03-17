// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void *mediaDesvio(float *vetor, float **tam, float **med, float **des ){
    float value=0, *pvalue = &value, ptam = **tam, calmedia, caldess=0, powerc = 0,caldes, *pcaldes=&caldess;
    int j;
    for(j=0;j<**tam;j++){
        *pvalue += *(vetor+j);
    }
    
    calmedia = *pvalue/(ptam);
    *med = &calmedia;
    for(j=0;j<**tam;j++){
        powerc = pow((*(vetor+j)- *pvalue),2);
        caldess += powerc;
        printf("%f\n", caldess);
        printf("%f\n",((vetor+j)- pvalue));
    }
    powerc = sqrt(caldess);
    caldess = powerc/ptam;
    *des = &caldess;

}
int main() {
    float *vet, nota, *media, *desvio, tam,*ptam=&tam;
    int  i;
    printf("Quantos alunos?\n"),
    scanf("%f", &tam );
    vet = malloc(tam* sizeof(float));
    if (vet != NULL){
        printf("Alocação de memoria executada com sucesso\n");
        for (i=0; i<tam; i++){
            printf("Nota do aluno %d: ", i+1);
            scanf("%f", &nota);
            *(vet+i)=nota;
            printf("nota %f\n", *(vet+i));
        }
        mediaDesvio(vet, &ptam, &media, &desvio);
        printf("Valores media fora da funcao %f", *media);
                printf("Valores desvio %f", *desvio);

        
    }
    else{
        printf("Falha na alocação de memoria");
    }
    
}
