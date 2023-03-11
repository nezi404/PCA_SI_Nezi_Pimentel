#include <stdio.h>
int somaarray(int *arr1, int *arr2, int *arr3){
    int cont = 0;
    char nullchar[] = "\0", *pnullchar = nullchar;
    while(arr1[cont] != *pnullchar ){
        if (arr1[cont] == *pnullchar ){
            printf("naoee");
            return 0;
        }
        cont++;
        
    }
}
int main() {
    int vet1[30], vet2[30], vet3[30], *pvet1 = &vet1, *pvet2 = &vet2, *pvet3 = &vet3, i, j, k, tam, *vetatu;
    
    for (i=0;i<2;i++){
        printf("Qual o tamanho do vetor %d? ", i+1);
        scanf("%d", &tam);
        for(j=0;j<tam;j++){
            printf("Qual o numero %d do vetor %d? ",j+1, i+1);
            if(i==0){
            scanf("%d", &pvet1[j]);
            vetatu = pvet1;
            }
            if(i==1){
            scanf("%d", &pvet2[j]);
            vetatu = pvet2;
            }
           
        }
       for (k=0;k<tam;k++){
        printf("Vetor %d: %d\n", 1, vetatu[k]);
        } 
    }
   somaarray(pvet1, pvet2, pvet3);


}
