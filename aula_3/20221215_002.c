#include <stdio.h>

int main() {
  int cont = 0, num = 0, num1;
  float media;
  while (cont < 4){
      cont = cont + 1;
      printf("Notas para soma: ");
      scanf("%d", &num1);
      num = num1 + num;
      
  }
media = num/4;
printf("A media: %0.2f", media);
  
}
