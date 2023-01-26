#include <stdio.h>
int fator = 1,numero;

int fatorial(int num, int tama){
	int cont = 1;
	while (cont <= num){
	fator*= cont;

	cont++;
	

	}
	return fator;
}

int main(){
	int tam, conta = 0;
	printf("Qual a quantidade de números? ");
	scanf("%d", &tam);
	int numarray[tam];
	while (conta < tam){
	printf("Insira um número menor que 100: \n");
	scanf("%d", &numero);
	if (numero > 100){
		if (numero > 100){
		printf("Numero invalido !\n");
		
	}
	
	}
	
	if (numero <= 100){
	
	numarray[conta]= numero;
	
	fatorial(numero, tam);
	numarray[conta]= fator;

	conta++;
	fator = 1;
	}
	
	}
	conta = 0;
	while (conta < tam){
	printf("Fatoriais: %d\n", numarray[conta]);
	conta++;
}
}
