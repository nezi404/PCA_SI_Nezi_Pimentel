/*
20230105005. Na matemática, a sequência de Fibonacci é uma sequência de números inteiros, começando normalmente por 0 e 1, na qual, 
cada termo subsequente (número de Fibonacci) corresponde a soma dos dois anteriores.
A sequência recebeu o nome do matemático italiano Leonardo de Pisa, mais conhecido por Fibonacci,
que descreveu, no ano de 1202, o crescimento de uma população de coelhos, a partir desta.
Tal sequência já era, no entanto, conhecida na antiguidade.
Os números de Fibonacci são, portanto, os números que compõem a seguinte sequência:
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377...
Assim, o número de Fibonacci Fn para n>0 é definido da seguinte maneira:
F1 = 1
F2 = 1
Fn = Fn-1 + Fn-2 para n>2.
Escreva uma função que retorne o número relativo a ao valor na sequência de Fibonacci na posição n:
int fib(int n)  //Recebe n como parâmetro e retorna Fn
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int fib(int n){

	int cont2 = 3, f12= 1, fibona =2, fibona2=1, fibona3;

	if (n==1 || n == 2){
	printf("%d", f12);
	}
	else{
		while (cont2 < n){
		cont2++;
		fibona = fibona + fibona2 ;
		fibona3= fibona - fibona2;
		fibona2 = fibona3;

		}
		printf("%d", fibona);

	}
}

int main(){
	int num;
	system("chcp 65001");
	system("cls");
	setlocale(LC_ALL,"");
	printf("Número: ");
	scanf("%d", &num);
	fib(num);
	
	}
		
		

