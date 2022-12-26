/*
20221222_010. Um número na forma n^3 é igual à soma de n ímpares
consecutivos. Por exemplo.
3^3=27, 3^3=7+9+11

Dado um número p, determine os ímpares consecutivos cuja soma é igual a
n3 para n assumindo valores de 1 a p.
*/

#include <stdio.h>
#include <math.h>


int main(){
	int num, acum = 0, a = 0,  cont = 1, cont2 = 1;
	printf("Insira um quadrado perfeito: " );
	scanf("%d", &num);
	while (acum != num){
		while (acum < num){
			acum = acum + cont;
			cont= cont + 2;
		}
		if (acum == num){
			acum = 0;
			cont = cont2;
			while (acum != num){
				printf("%d", cont);
				acum = acum + cont;
				cont = cont + 2;
				if (acum == num){
					printf(" = %d", acum);
					return 0;
				}
				else{
					printf(" + ");
				}
				
			}
			
			
		}
		acum = 0;
		a = a + 2;
		cont = a + 1;
		cont2 = cont;
	}
	printf("%d", acum);
	}
