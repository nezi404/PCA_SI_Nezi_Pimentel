#include <stdio.h>
#include <math.h>

int numhip = 1,numposi =-1;

int perg (){
	while (numposi < 0){
		printf("Insira um numero inteiro positivo: ");
		scanf("%d", &numposi);
		if (numposi < 0){
			printf("Insira um numero valido\n");
		}
}
	return numposi;

	}
	
int impri (int imprimir){
	printf("O hiperfatorial de %d eh %d",numposi, imprimir);
}
int hiperfatorial(){
	int  cont = 1, poten = 0;
	while (cont <= numposi){
		poten = pow(cont, cont);
		numhip *= poten;
		cont++;
	}

}


int main(){
	perg();
	hiperfatorial();
	impri(numhip);
}
