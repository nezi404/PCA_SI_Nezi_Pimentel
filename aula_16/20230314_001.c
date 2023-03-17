// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float *vetor, float *tam, float *med, float *des ){
    float value=0, *pvalue = &value, calmedia, caldess, powerc, dessub, *ppowerc=&powerc, desvalue, othercaldess;
    int j;
    
    for(j=0;j<*tam;j++){
        *pvalue += *(vetor+j);
    }
    
    calmedia = *pvalue/(*tam);
    *med = calmedia;
    for(j=0;j<*tam;j++){
        dessub = *(vetor+j)- (*pvalue / *tam);
        powerc = pow(dessub,2);
        caldess += powerc;
    }
    
    othercaldess = caldess/ *tam;
    *des = sqrt(othercaldess);

}
int main() {
    float *vet, nota, media, desvio, tam;
    int  i;
    printf("Quantos alunos?\n");
    scanf("%f", &tam );
    vet = malloc(tam* sizeof(float));
    if (vet != NULL){
        
        for (i=0; i<tam; i++){
            printf("Nota do aluno %d: ", i+1);
            scanf("%f", &nota);
            *(vet+i)=nota;
            printf("nota %f\n", *(vet+i));
        }
        mediaDesvio(vet, &tam, &media, &desvio);
        printf("Valores: media  %f\n", media);
        printf("Valores: desvio padrao %f\n", desvio);


        
    }
    else{
        printf("Falha na alocação de memoria");
    }
    
}
