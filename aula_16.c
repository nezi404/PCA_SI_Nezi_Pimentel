// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

void mediaDesvio(float *vetor, int tam, float *med, float *des ){
    float value=0, *media ;
    int j;
    for(j=0;j<tam;j++){
        value += *(vetor+j);
    }
    media = &value;
    med = media;
    printf("Valores somados %f", value);
        printf("Valores media %f", med);

}
int main() {
    float *vet, nota, *media, *desvio;
    int tam, i;
    printf("Quantos alunos?\n"),
    scanf("%d", &tam );
    vet = malloc(tam* sizeof(float));
    if (vet != NULL){
        printf("Alocação de memoria executada com sucesso");
        for (i=0; i<tam; i++){
            printf("Nota do aluno %d: ", i+1);
            scanf("%f", &nota);
            *(vet+i)=nota;
            printf("nota %f\n", *(vet+i));
        }
        mediaDesvio(vet, tam, media, desvio);
        
    }
    else{
        printf("Falha na alocação de memoria");
    }
    
}
