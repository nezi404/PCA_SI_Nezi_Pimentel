// o codigo tá dando uns numero mo aleatorio no cmpilador online, era o & no printf
# include <stdio.h>
int main(void){
  int lado, base, area;
  printf("Insira o tamanho do lado do triangulo: ");
  scanf("%d", &lado);
  printf("Insira o tamanho da base do triangulo: ");
  scanf("%d", &base);
  area = (lado*base)/2;
  printf("A area do triangulo eh: %d", area);
  return 0;
  }
