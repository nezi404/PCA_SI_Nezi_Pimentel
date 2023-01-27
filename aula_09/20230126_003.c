#include <stdio.h>

    

int main(){
    int numlin = 3, numcol = 3, mat1[numlin][numcol], escalar;
	int cont1, cont2;
	
		
	    for(cont1 = 0; cont1 < numlin ; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			printf("NUmeros da matriz linha %d coluna %d: ", cont1 +1, cont2+ 1);
			scanf("%d", &mat1[cont1][cont2]);
			
		}
	}
	 	printf("Qual o escalar? ");
		scanf("%d", &escalar);
		printf("Resultado: \n");

		for(cont1 = 0; cont1 < numlin; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			printf("\t%d\t", mat1[cont1][cont2] * escalar);
			
			
		}
        printf("\n");
	}
	
}
