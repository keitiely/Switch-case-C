/*7- Faça um programa que receba a altura e o peso de uma pessoa. 
De acordo com a tabela a seguir verifique e mostre qual a classificação dessa pessoa.*/
#include <stdio.h>

int main(){
  float altura, peso;
  
printf("Digite seu peso em kg, e sua altura em metros, separados por um espaco: ");
  scanf("%f %f", &peso, &altura);
  
//peso ate 60
if(peso <= 60){
  if(altura < 1.20){
  printf("A");}
  else if(altura >= 1.20 && altura <= 1.70){
    printf("B");
  }
  else if(altura > 1.70 && peso <=60){
    printf("C");
  }
}
  //peso de 60 a 90
  if(peso > 60 && peso <= 90){
    if(altura < 1.20){
      printf("D");
    }
    else if(altura >= 1.2 && altura <= 1.7){
      printf("E");
    }
    else if(altura > 1.7){
      printf("F");
    }
  }
  //peso maior que 90 
  if(peso > 90){
    if(altura < 1.20){
      printf("G");
    }
    else if(altura >= 1.2 && altura <= 1.7){
      printf("H");
    }
    else if(altura > 1.7){
      printf("I");
    }
  }
  
}
