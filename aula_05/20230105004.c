/*
20230105004. Na matemática, o fatorial de um número natural n, representado por n!, é o produto de todos os inteiros positivos menores ou iguais a n.
Construa uma função que receba como parâmetro n e retorne o fatorial de n:
int fat(int n)  //Recebe n como parâmetro e retorna n!
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int num, fato=1;

int fat(int n){
	int cont1;
	while (cont1 < n){
		 
		fato = fato+ fato*cont1;
		cont1++; 

	}
	return fato;
}

int main(){
	system("chcp 65001");
	system("cls");
	setlocale(LC_ALL,"");
	printf("Número: ");
	scanf("%d", &num);
	fat(num);
	printf("%d! = %d",num, fato);
	
	}
		
		

