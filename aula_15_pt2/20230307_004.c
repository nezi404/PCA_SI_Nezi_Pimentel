
#include <stdio.h>


int main() {
    int vet[8], *vetpc = &vet[0], *vetpf = &vet[7], *atualp;
    for (atualp = vetpc; atualp <= vetpf; atualp++){
        printf("Numero do vetor: ");
        scanf("%d", &*atualp); 
    }
    for (atualp = vetpc; atualp <= vetpf; atualp++){
        printf("Numero do vetor vezes dois: %d\n", *atualp * 2);
        
    }
    for (atualp = vetpc; atualp <= vetpf; atualp++){
        if (*atualp % 2 == 0){
        printf("Numero par do vetor : %d\n", atualp);
        }
    }
    
    
}
