#include <stdio.h>

int main(){
int salario, novo_salario;
  printf("Qual eh seu salario? ");
  scanf("%d", &salario);
  novo_salario = (salario*0.1)+ salario;
  printf("Seu novo salario eh %d", novo_salario);
}
