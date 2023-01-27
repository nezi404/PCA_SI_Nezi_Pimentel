#include <stdio.h>

    

int main(){
    int numlin = 5, numcol = 5, mat1[numlin][numcol], encontrar, encontrado = 0;
	int cont1, cont2, somalinqua = 0, somacol2 = 0;
	
		
	    for(cont1 = 0; cont1 < numlin ; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			printf("NUmeros da matriz linha %d coluna %d: ", cont1 +1, cont2+ 1);
			scanf("%d", &mat1[cont1][cont2]);
			
		}
	}

		printf("\nDiagonal principal:\n");
		
		for(cont1 = 0; cont1 < numlin; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			if ( cont1 == cont2){
				printf("\t%d\t", mat1[cont1][cont2]);

			}
			printf("\t");	
		}
		printf("\n");
		
	}
		printf("\nDiagonal secundaria:\n");
		for(cont1 = 0; cont1 < numlin; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			if ( cont1 + 1 + cont2 + 1 == numlin + 1){
				printf("\t%d\t", mat1[cont1][cont2]);

			}
			printf("\t");	
		}
		printf("\n");
		
	}
		somalinqua = mat1[3][0] + mat1[3][1] + mat1[3][2] + mat1[3][3] + mat1[3][4];
		printf("\nResultado da soma da quarta linha: %d\n", somalinqua);
		somacol2 = mat1[0][1] + mat1[1][1] + mat1[2][1] + mat1[3][1] + mat1[4][1];
		printf("\nResultado da soma da segunda coluna: %d\n", somacol2);
		
		printf("Imprimir toda matriz menos a coluna principal: \n");
			for(cont1 = 0; cont1 < numlin; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			if (cont1 != cont2){
			printf("\t%d\t", mat1[cont1][cont2]);
			}
			else{
				printf("\t\t");
			}	
		}
		printf("\n");
		}
	
		
}
