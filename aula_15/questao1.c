//fazer funcao que imprime o vetor pelo ponteiro

#include <stdio.h>
int imprimir(int *pointero, int *pointert){
    int *pvet;
    for (pvet= pointero; pvet <= pointert; pvet++){
        printf("%d ", *pvet);
    }
    printf("\n");
}

int main() {
    int vet1[5]= {1, 2, 3, 4, 5}, vet2[5]= {6, 7, 8, 9, 10}, vet3[5]= {11, 12, 13, 14, 15};
    int i;
    int *p1c = &vet1[0], *p2c = &vet2[0], *p3c = &vet3[0];
    int *p1f = &vet1[4], *p2f = &vet2[4], *p3f = &vet3[3];
    int *p1c2 = &vet1[2], *p2c2 = &vet2[3], *p3c2 = &vet3[1];
    int *p1f2= &vet1[3], *p2f2 = &vet2[4], *p3f2 = &vet3[3];
    
    imprimir(p1c, p1f);
    imprimir(p2c, p2f);
    imprimir(p3c, p3f);
    imprimir(p1c2, p1f2);
    imprimir(p2c2, p2f2);
    imprimir(p3c2, p3f2);

} 
