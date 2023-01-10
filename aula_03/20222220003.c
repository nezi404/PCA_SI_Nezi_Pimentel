/*
20222220003 Altere o algoritmo anterior para que ele considere apenas a soma dos ímpares que estejam entre 100 e 200.

*/

#include <stdio.h>

int main() {
  int cont = 0, num = 0, num1;
  while (cont < 50){
      cont = cont + 1;
      printf("Numeros para soma: ");
      scanf("%d", &num1);
      if (num1%2 !=0 && 100 < num1 && num1 < 200)
        num = num1 + num;
      
  }
printf("A soma dos numeros impares dados: %d", num);
  
}
