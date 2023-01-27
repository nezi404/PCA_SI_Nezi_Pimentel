#include <stdio.h>

    

int main(){
    int numlin = 3, numcol = 3, mat1[numlin][numcol], encontrar, encontrado = 0;
	int cont1, cont2;
	
		
	    for(cont1 = 0; cont1 < numlin ; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			printf("NUmeros da matriz linha %d coluna %d: ", cont1 +1, cont2+ 1);
			scanf("%d", &mat1[cont1][cont2]);
			
		}
	}
	 	printf("Qual o valor a ser encontrado? ");
		scanf("%d", &encontrar);

		for(cont1 = 0; cont1 < numlin; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			if ( mat1[cont1][cont2] == encontrar){
				printf("O numero %d esta na linha %d na coluna %d\n",encontrar, cont1 + 1, cont2 + 1);
				encontrado = 1;
			}	
		}
		
	}
	if (encontrado == 0){
			printf("O valor %d nao foi encontrado",encontrar);
		}
}
