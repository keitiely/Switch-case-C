#include <stdio.h>
#include <math.h>

int main(){
  float x, z;
  int a, b, c;
  char y;
  printf("Iniciando a calculadora..\n");
  printf("Escolha a operacao que deseja fazer:\n");
  printf("(a) Adicao.\n");
  printf("(b) Subtracao.\n");
  printf("(c) Multiplicacao.\n");
  printf("(d) Divisao.\n");
  printf("(e) Elevar ao um numero.\n");
  printf("(f) Raiz de qualquer indice.\n");
  printf("(g) Resto.\n");
  scanf("%c", &y);
 
  switch(y){
    case 'a':
    printf("Digite dois numeros separado por espacos: ");
    scanf("%f %f", &x, &z);
    printf("%.1f + %.1f= %.1f", x, z, x+z);
    break;
    
    case 'b':
    printf("Digite dois numeros separado por espacos: ");
    scanf("%f %f", &x, &z);
    printf("%.1f - %.1f= %.1f", x, z, x-z);
    break;
    
    case 'c':
    printf("Digite dois numeros separado por espacos: ");
    scanf("%f %f", &x, &z);
    printf("%.1f * %.1f= %.1f", x, z, x*z);
    break;
    
    case 'd':
    printf("Digite dois numeros separado por espacos: ");
    scanf("%f %f", &x, &z);
    printf("%.1f / %.1f= %.1f", x, z, x/z);
    break;
    
    case 'e':
    printf("Digite o numero e o expoente separado por espacos: ");
    scanf("%f %f", &x, &z);
    printf("%.1f ˆ %.1f= %.1f", x, z, pow(x,z));
    break;
    
    case 'f':
    printf("Digite o numero e o indice da raiz separado por espacos: ");
    scanf("%d %d", &a, &b);
    printf("%d ˆ√ %d = %d", b, a, c=pow(a, 1.0/b));
    break;
    
    case 'g':
    printf("Digite os dois numeros para descobrir o resto, separados por espacos: ");
    scanf("%d %d", &a, &b);
    printf("%d / %d = %d", a, b, a % b);
    break;
    
    default:
    printf("Valor invalido!");
    break;
  }

}
