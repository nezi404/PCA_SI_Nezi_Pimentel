/*
20221222_003. Faça um programa que leia vários inteiros 
positivos e mostre, 
no final, a soma dos números pares e
 a soma dos números ímpares. O 
programa para quando
 entrar um número maior que 1000.*/

#include <stdio.h>

int main() {
  int pergunta = 0, cont = 0, num = 0, num1, numpar = 0 ;
  float n;
  printf("Quantos numeros no total? ");
  scanf("%d", & pergunta);
  
  while (cont < pergunta){
      cont = cont + 1;
      printf("Numeros para soma: ");
      scanf("%f", &n);
      if (n > 1000 || n < 0 || n - int(n)!= 0){
          printf("Nao sao permitidos numeros maiores que 1000, ou nao inteiros, ou negativos.");
          return 0;
      }
      num1= n;
      if (num1%2 !=0){
        num = num1 + num;
      }
      if (num1%2 ==0){
        numpar = num1 + numpar;
      }
      
       
      
  }
printf("A soma dos numeros impares dados: %d\nA soma dos numeros pares dados: %d", num, numpar);
  
}

