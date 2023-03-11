#include <stdio.h>
int somaarray(int *arr1, int *arr2, int *arr3, int tamar1, int tamar2){
    int cont = 0;
    char nullchar[] = "\0", *pnullchar = nullchar;

     if (tamar1 != tamar2){
        printf("Tamanhos diferentes");
        return 0;
      }
      
    while(arr1[cont] != *pnullchar ){
        arr3[cont] = arr1[cont] + arr2[cont];
        cont++;
    }
    for (cont=0;cont<tamar1;cont++){
        printf("Vetor 3: %d\n", arr3[cont]);
        } 
        return 1;
}
int main() {
    int vet1[30], vet2[30], vet3[30], *pvet1 = &vet1, *pvet2 = &vet2, *pvet3 = &vet3, i, j, k, tam, tam1, tam2, *vetatu;
    
    for (i=0;i<2;i++){
        if (i==0){
            printf("Qual o tamanho do vetor %d? ", i+1);
            scanf("%d", &tam1);
            tam = tam1;
        }
        if (i==1){
            printf("Qual o tamanho do vetor %d? ", i+1);
            scanf("%d", &tam2);
            tam = tam2;
        }
        
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
        printf("Vetor %d: %d\n", i + 1, vetatu[k]);
        } 
    }
    
   somaarray(pvet1, pvet2, pvet3, tam1, tam2);

}
