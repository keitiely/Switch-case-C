/*5- Faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual e mostre o cargo,
  o valor do aumento e seu novo salário.
  Os cargos estão na tabela a seguir.*/
#include <stdio.h>

int main(){
  int a;
  float x;
  printf("Digite o codigo do seu cargo:\n");
  printf("(1) Escrituario\n");
  printf("(2) Secretario\n");
  printf("(3) Caixa\n");
  printf("(4) Gerente\n");
  printf("(5) Diretor\n");
  scanf("%d", &a);

  switch(a){
    case 1:
      printf("Digite seu salario:\n");
      scanf("%f", &x);
      printf("Cargo: Escrituario, 50%% de aumento\n");
      printf("Seu aumento foi de %.2f e seu novo salario passa a ser: %.2f", x * 0.5, (x * 0.5) + x);
  break;
    
    case 2:
      printf("Digite seu salario:\n");
      scanf("%f", &x);
    printf("Cargo: Secretario, 35%% de aumento\n");
    printf("Seu aumento foi de %.2f e seu novo salario passa a ser: %.2f", x * 0.35, (x * 0.35) + x);
    break;
    
    case 3:
      printf("Digite seu salario:\n");
      scanf("%f", &x);
    printf("Cargo: Caixa, 20%% de aumento\n");
    printf("Seu aumento foi de %.2f e seu novo salario passa a ser: %.2f", x * 0.2, (x * 0.2) + x);
    break;
    
    case 4:
      printf("Digite seu salario:\n");
      scanf("%f", &x);
    printf("Cargo: Gerente, 10%% de aumento\n");
    printf("Seu aumento foi de %.2f e seu novo salario passa a ser: %.2f", x * 0.1, (x * 0.1) + x);
    break;
    
    case 5:
    printf("Cargo: Diretor, infelizmente nao ha aumento :( \n");
    break;
    
    default:
    printf("Codigo invalido");
      break;
  } 
}
