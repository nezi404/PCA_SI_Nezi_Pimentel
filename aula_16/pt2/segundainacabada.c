// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

    
int main() {
    int *mat, taml, tamc, i,j, num;
    printf("Qual o valor de linhas e colunas?");
    scanf(" %d %d", &taml, &tamc);
    mat = (int *)malloc(taml*tamc*sizeof(int));
    if (mat!= NULL){
        printf("foi\n");
        
        for (i=0;i<taml;i++){
            for (j=0; j<tamc;j++){
                printf("Numeros da coluna %d e linha %d: ", j+1, i+1 );
                scanf("%d", &num);
                *(mat + tamc*i + j) = num; 
            }
        }
        for (i=0;i<taml;i++){
            for (j=0; j<tamc;j++){
                printf(" %d ", *(mat + tamc*i + j)); 
            }
            printf("\n");
            
        }
        
        for (i=0;i<taml;i++){
            for (j=0; j<tamc;j++){
                printf(" %d ", *mat[i]); 
            }
            printf("\n");
            
        }
        free(mat);
        
        
    }
    if (mat == NULL){
        printf("nao foi");
    }
    
    
}
