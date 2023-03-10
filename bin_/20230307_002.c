
#include <stdio.h>
int achar(int *pontei, int *pontef, int *ponteiron, int *ponteiroatual, int *numonar, int **numonara){
    if (*ponteiron == *ponteiroatual && *numonar == 0){
        int onar = 1, *onarray = &onar;
        *numonara = onarray;
        printf("O ponteiro do valor %d eh %d\n", *ponteiroatual, ponteiroatual);
    }
    if (*ponteiron != *ponteiroatual && *numonar == 0){
        if ( *ponteiroatual == *pontef){
        int other = 100, *otherp = &other ;
        *numonara = otherp;
        int nullvalue = 0;
        ponteiroatual = &nullvalue;
        printf("O ponteiro do valor eh nulo %d : %d\n", ponteiroatual, *ponteiroatual);
        }
    }
}
int main() {
    int vetor[15] = {1, 2, 3, 4, 2, 5, 6, 2, 7, 8, 9, 10, 11, 12};
    int i, numeroon = 0, naotem= 0, *pnumeroon = &naotem;
    int numerodois = 2;
    int *pini = &vetor[0];
    int *pfin = &vetor[14];
    int *pnumd = &numerodois;
    int *pnumatua = &vetor[0] ;
    
    
    for (i = 0; *pnumatua < pfin; i++){
        pnumatua = &vetor[i];
        achar(pini, pfin, pnumd, pnumatua, pnumeroon, &pnumeroon);
    }

}
