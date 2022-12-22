/*
20221222_003. Faça um programa que leia vários inteiros 
positivos e mostre, 
no final, a soma dos números pares e
 a soma dos números ímpares. O 
programa para quando
 entrar um número maior que 1000.*/

#include <stdio.h>

int main() {
  int num = 0, numpar = 0, pergunta = 0, cont = 0, num1;
  printf("Quantos numeros no total? ");
  scanf("%d", & pergunta);
  
  while (cont < pergunta){
      cont = cont + 1;
      printf("Numeros para soma: ");
      scanf("%d", &num1);
      if (num1 > 1000 || num1 < 0){
          printf("Nao sao permitidos numeros maiores que 1000 ou negativos.");
          return 0;
      }
      if (num1%2 !=0){
        num = num1 + num;
      }
      if (num1%2 ==0){
        numpar = num1 + numpar;
      }
      
       
      
  }
printf("A soma dos numeros impares dados: %d\nA soma dos numeros pares dados: %d", num, numpar);
  
}


