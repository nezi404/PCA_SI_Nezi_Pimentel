#include <stdio.h>
#include <stdlib.h>
int *alocaler(int *tam){
  int  *vet, i, numero;
    printf("Quantos numeros?\n");
    scanf("%d", &*tam );
    vet = malloc(*tam * sizeof(int));
    if (vet != NULL){

        for (i=0; i<*tam; i++){
            printf("Numeros do array: %d: ", i+1);
            scanf("%d", &numero);
            *(vet+i)=numero;
            printf("numero %d\n", *(vet+i));
        }
        
  
    }
    printf("\n");
return vet;
}

void achamaior(int *vet1, int *maiorval, int *tam, int *menorval){
     int cont, cont2;
    for (cont = 0; cont < *tam; cont++){
        for (cont2 = 0; cont2 < *tam; cont2++){
            if (vet1[cont] > vet1[cont2 + 1] && *maiorval < vet1[cont]){
                *maiorval = vet1[cont];
            }
            if (vet1[cont] < vet1[cont2 + 1] && *menorval > vet1[cont]){
                *menorval = vet1[cont];
            }
        }
        
    }
}
int main() {
    int *vetor, i, maior = 0, menor = 0, tam=9;
    vetor = alocaler(&tam);
    achamaior(vetor, &maior, &tam, &menor);
    printf("Maior valor :%d \nMenor valor : %d", maior, menor);
    free(vetor);

}
