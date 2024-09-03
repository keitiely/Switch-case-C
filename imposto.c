/* 6-Faça um programa que apresente o menu de opções a seguir, permita ao usuário escolher a opção desejada, receba os dados necessários para executar a operação e mostre o resultado.
Verifique a possibilidade de opção inválida e não se preocupe com restrições como salário negativo.
Menu de opções:
1 - Imposto
2 - Novo Salário
3 - Classificação
Digite a opção desejada →*/
#include <stdio.h>

int main(){
  int a;
  float x;
  printf("Digite a opcao desejada: \n");
  printf("(1) Imposto\n");
  printf("(2) Novo Salario\n");
  printf("(3) Classificacao\n");
  scanf("%d", &a);

  switch(a){
    case 1:
      printf("Digite seu salario:\n");
      scanf("%f", &x);
      if(x < 500){
        printf("percentual de imposto: 5%%\n");
        printf("valor do imposto: %.2f\n", x * 0.05);
      }
      else if(x >= 500 && x <= 850){
        printf("percentual de imposto: 10%%\n");
        printf("valor do imposto: %.2f\n", x * 0.1);
      }
      else if(x >= 850){
        printf("percentual de imposto: 15%%\n");
        printf("valor do imposto: %.2f\n", x * 0.15);
     }
    break;
    
    case 2:
    printf("Digite seu salario:\n");
    scanf("%f", &x);
    if(x > 1500){
      printf("Novo salario: %.2f", x + 25);
    }
    else if(x >= 750 && x <= 1500){
      printf("Novo salario: %.2f", x + 50);
    }
    else if(x >= 450 && x <= 750){
      printf("Novo salario: %.2f", x + 75);
    }
    else if(x < 450){
      printf("Novo salario: %.2f", x + 100);
    }
    break;
    
    case 3:
    printf("Digite seu salario:\n");
    scanf("%f", &x);
    if(x <= 700){
      printf("Mal Remunerado!");
    }
    else if(x > 700){
      printf("Bem Remunerado!");
    }
    break;
    
    default:
    printf("Codigo invalido");
    break;
  } 
}
