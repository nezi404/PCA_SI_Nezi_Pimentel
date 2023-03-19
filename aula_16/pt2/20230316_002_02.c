#include <stdio.h>
#include <stdlib.h>

int main(){
    
    double **mat1,  **mat2 , **mat3;
	int cont1, cont2, cont;
	int numlin, numcol;
	printf("Qual o numero de linhas? ");
    scanf("%d", &numlin);
    printf("Qual o numero de colunas? ");
    scanf("%d", &numcol);
    
    mat1 = malloc(numlin*sizeof(double*));
    mat2 = malloc(numlin*sizeof(double*));
    mat3 = malloc(numlin*sizeof(double*));
    for(cont =0; cont < numlin; cont++){
        mat1[cont] = malloc(numcol*sizeof(double));
        mat2[cont] = malloc(numcol*sizeof(double));
        mat3[cont] = malloc(numcol*sizeof(double));
    }
    
	
	    for(cont1 = 0; cont1 < numlin ; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			printf("NUmeros da matriz 1 linha %d coluna %d: ", cont1 +1, cont2+ 1);
			scanf("%lf", &*(*(mat1 + cont1) + cont2));
			
		}
	}
	      for(cont1 = 0; cont1 < numlin ; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			printf("NUmeros da matriz 2 linha %d coluna %d: ", cont1 + 1, cont2+ 1);
			scanf("%lf", &*(*(mat2 + cont1) + cont2));
			
		}
	}
	
		for(cont1 = 0; cont1 < numlin ; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			*(*(mat3 + cont1) + cont2)= *(*(mat1 + cont1) + cont2) + *(*(mat2 + cont1) + cont2);
			
		}
	}

		for(cont1 = 0; cont1 < numlin; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			printf("\t%lf\t", *(*(mat3 + cont1) + cont2));
			
			
		}
        printf("\n");
	}
	
}

    
