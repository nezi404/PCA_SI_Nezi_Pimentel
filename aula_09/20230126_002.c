#include <stdio.h>

int matrix(int numlin, int numcol){
    
int mat1[numlin][numcol],  mat2[numlin][numcol] , mat3[numlin] [numcol];
	int cont1, cont2;
	
	
	    for(cont1 = 0; cont1 < numlin ; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			printf("NUmeros da matriz 1 linha %d coluna %d: ", cont1 +1, cont2+ 1);
			scanf("%d", &mat1[cont1][cont2]);
			
		}
	}
	      for(cont1 = 0; cont1 < numlin ; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			printf("NUmeros da matriz 2 linha %d coluna %d: ", cont1 + 1, cont2+ 1);
			scanf("%d", &mat2[cont1][cont2]);
			
		}
	}
	
		for(cont1 = 0; cont1 < numlin ; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			mat3[cont1][cont2]= mat1[cont1][cont2] + mat2[cont1][cont2];
			
		}
	}

		for(cont1 = 0; cont1 < numlin; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			printf("\t%d\t", mat3[cont1][cont2]);
			
			
		}
        printf("\n");
	}
	
}
int main(){
    int numlin_, numcol_;
	printf("Qual o numero de linhas? ");
    scanf("%d", &numlin_);
    printf("Qual o numero de colunas? ");
    scanf("%d", &numcol_);
    matrix(numlin_, numcol_);

}
