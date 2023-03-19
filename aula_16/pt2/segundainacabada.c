#include <stdio.h>
#include <stdlib.h>

    
int main() {
    int **mat, taml, tamc, i,j, num;
    printf("Qual o valor de linhas e colunas?");
    scanf(" %d %d", &taml, &tamc);
    mat = malloc(taml * sizeof(int*));
     for (i=0;i<taml;i++){
           mat[i] = malloc(tamc * sizeof(int));
        }
    
        
        for (i=0;i<taml;i++){
            for (j=0; j<tamc;j++){
                printf("Numeros da coluna %d e linha %d: ", j+1, i+1 );
                scanf("%d", &num);
                *(*(mat + i) + j) = num; 
            }
        }
        printf("\n imprimir por aritmetica de ponteiro\n");
        for (i=0;i<taml;i++){
            for (j=0; j<tamc;j++){
                printf(" %d ", *(*(mat + i) + j)); 
            }
            printf("\n");
            
        }
        printf("\n imprimir por index\n");
        for (i=0;i<taml;i++){
            for (j=0; j<tamc;j++){
                printf(" %d ", *(*(mat + i) + j)); 
            }
            printf("\n");
            
        }
        
        
        for (i=0;i<taml;i++){
                free(mat[i]);
     
        }
        free(mat);

    
}
