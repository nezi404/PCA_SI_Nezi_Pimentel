#include <stdio.h>

    

int main(){
    int numlin = 5, numcol = 5, mat1[numlin][numcol];
	int cont1, cont2, somalin=0, somacol = 0, vallin[numlin], valcol[numlin], valsec =0, valprin=0, lin=0, col=0, sec = 0, igual = 1 ;
	printf("Qual o numero de linhas e colunas?? ");
    scanf("%d", &numlin);
    numcol = numlin;	
	    for(cont1 = 0; cont1 < numlin ; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			printf("Numeros da matriz linha %d coluna %d: ", cont1 +1, cont2+ 1);
			scanf("%d", &mat1[cont1][cont2]);
			
		}
	}
		
   	    for(cont1 = 0; cont1 < numlin ; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
		if (lin == cont1){
			somalin+= mat1[lin][cont2];
			
		}
		
			
		}
		vallin[lin]= somalin;
		lin++;
		somalin=0;
	}
	
		
   	    for(cont1 = 0; cont1 < numlin ; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
		
			somacol+= mat1[cont2][col];

		}
			
		valcol[cont1]= somacol;
		somacol=0;	
		col++;
			
	}

	
   	    for(cont1 = 0; cont1 < numlin ; cont1++){
			valprin = mat1[cont1][cont1] + valprin;
			
		}
		
   	    for(cont1 = 0; cont1 < numlin; cont1++){
		for (cont2 = 0; cont2  < numcol; cont2++){
			if ( cont1 + 1 + cont2 + 1 == numlin + 1){
				sec = mat1[cont1][cont2] + sec;

			}
	}	
	}
	valsec= sec;
	
	for(cont1 = 0; cont1 < numlin; cont1++){
		if (valcol[cont1] != vallin[cont1] || valprin != valsec){
		igual = 0;
	}		
		}
		if (igual == 1){
			printf("Eh quadrado magico");
		}
		else{
			printf("Nao eh quadrado magico");
		}



	
}
