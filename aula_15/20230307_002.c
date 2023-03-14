#include <stdio.h>
int *achar( int *ponteiron, int *ponteiroatual){
    if (*ponteiron == *ponteiroatual ){
        
        //printf("O ponteiro do valor %d eh %d\n", *ponteiroatual, ponteiroatual);
        return ponteiroatual;
    }
    if (*ponteiron != *ponteiroatual){
        return NULL;
        
    }
}
int main() {
    int vetor[15] = {1, 2, 3, 4, 2, 5, 6, 2, 7, 8, 9, 10, 11, 12};
    int i, numeroon = 0, naotem= 0, *pnumeroon = &naotem, *ver;
    int numerodois = 2;
    int *pini = &vetor[0];
    int *pfin = &vetor[14];
    int *pnumd = &numerodois;
    int *pnumatua = &vetor[0] ;
    int *pvet;
    
    
    for (pvet = pini; pnumatua < pfin; pvet++){
        pnumatua = pvet;
        ver = achar(pnumd, pvet);
        if (ver == NULL){
            printf("Nao encontrado na lista\n");
        }
        else{
            printf("O valor %d eh %d\n", *ver, ver);
        }
    }

}
