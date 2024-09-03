/*1-Faça um programa que receba quatro valores, I, A, B e C. I é um valor inteiro e positivo e A, B, C são valores reais. 
Escreva os números A, B, e C obedecendo a tabela a seguir. 
Supondo que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3.*/
#include <stdio.h>

int main(){
  int i;
  float a, b, c;
  printf("Digite tres numeros separados por espacos: ");
  scanf("%f %f %f", &a, &b, &c);
  printf("Escolha 1, 2 ou 3: \n");
  printf("(1) Para ordem crescente. \n");
  printf("(2) Para ordem decrescente. \n");
  printf("(3) Para o maior dos numeros fica no meio entre eles. \n");
  scanf("%d", &i);

  switch (i) {
    case 1:
      if (a>b && b>c){ //3 2 1
        printf("A ordem crescente e: %.2f %.2f %.2f", c, b, a);
      }
      else if (a>c && c>b){ //3 1 2
        printf("A ordem crescente e: %.2f %.2f %.2f", b, c, a);
      }
      else if(b>a && a>c){ // 2 3 1
        printf("A ordem crescente e: %.2f %.2f %.2f", c, a, b);
      }
      else if(a>b && a<c){ //2 1 3
        printf("A ordem crescente e: %.2f %.2f %.2f", b, a, c);
      } 
      else if (c>b && b>a){ // 1 2 3
        printf("A ordem crescente e: %.2f %.2f %.2f", a, b, c);
      }
    else if(a<b && b>c){ // 1 3 2
        printf("A ordem crescente e: %.2f %.2f %.2f", a, c, b);
    }
      else if(a==b && b==c){ // 3 3 3
          printf("A ordem crescente e: %.2f %.2f %.2f", a, b, c);
      }
    break;
    case 2:
    if (a>b && b>c){ //3 2 1
      printf("A ordem decrescente e: %.2f %.2f %.2f", a, b, c);
    }
    else if (a>c && c>b){ //3 1 2
      printf("A ordem decrescente e: %.2f %.2f %.2f", a, c, b);
    }
    else if(b>a && a>c){ // 2 3 1
      printf("A ordem decrescente e: %.2f %.2f %.2f", b, a, c);
    }
    else if(a>b && a<c){ //2 1 3
      printf("A ordem decrescente e: %.2f %.2f %.2f", c, a, b);
    } 
    else if (c>b && b>a){ // 1 2 3
      printf("A ordem decrescente e: %.2f %.2f %.2f", c, b, a);
    }
    else if(a<b && b>c){ // 1 3 2
      printf("A ordem crescente e: %.2f %.2f %.2f", a, c, b);
    }
      else if(a==b && b==c){ // 3 3 3
          printf("A ordem decrescente e: %.2f %.2f %.2f", a, b, c);
      }
    break;
    case 3:
    if ((b && c)< a){ //3 2 1
      printf("Maior no meio: %.2f %.2f %.2f", c, a, b);
    }
    else if((a && c)< b){ // 2 3 1
      printf("Maior no meio: %.2f %.2f %.2f", a, b, c);
    }
    else if((a && b)< c){ //2 1 3
      printf("Maior no meio: %.2f %.2f %.2f", b, c, a);
    } 
    break;
    default:
    printf("valor invalido!");
    break;
  }
}
