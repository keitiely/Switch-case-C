#include <stdio.h>
#include <math.h>

int main(){
  float x;
  char y;
  printf("Escolha a operacao que deseja fazer, a, b, c ou d\n");
  printf("(a) O número digitado ao quadrado.\n");
  printf("(b) O número digitado ao cubo.\n");
  printf("(c) A raiz quadrada.\n");
  printf("(d) A raiz cúbica.\n");
  scanf("%c", &y);
  switch(y){
    case 'a':
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("O numero %.1f ao quadrado e: %.1f", x, pow(x,2));
    break;
    
    case 'b':
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("O numero %.1f ao cubo e: %.1f", x, pow(x,3));
    break;
    
    case 'c':
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("A raiz quadrada de %.1f e: %.1f",x, sqrt(x));
    break;
    
    case 'd':
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("A raiz cubica de %.1f e: %.1f",x, cbrt(x));
    break;
    
    default:
    printf("Valor invalido!");
    break;
  }
}
