
/*
20222220002 Escreva um algoritmo que lê 50 números inteiros e em seguida mostra a soma de todos os ímpares lidos.
*/
#include <stdio.h>

int main() {
  int cont = 0, num = 0, num1;
  while (cont < 50){
      cont = cont + 1;
      printf("Numeros para soma: ");
      scanf("%d", &num1);
      if (num1%2 !=0)
        num = num1 + num;
      
  }
printf("A soma dos numeros impares dados: %d", num);
  
}
