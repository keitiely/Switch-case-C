/*9- Faça um programa que receba:
a- O código do estado de origem da carga de um caminhão, supondo que a digitação do código do estado seja sempre válida, ou seja, um número inteiro entre 1 e 5;
b- O peso da carga do caminhão em toneladas;
c- O código da carga, supondo que a digitação do código da carga seja sempre válida, ou seja, um número inteiro entre 10 e 40.
  
  
 Calcule e mostre:
1- O peso da carga do caminhão convertido em quilos;
2- O preço da carga do caminhão;
3- O valor do imposto, sabendo-se que o imposto é cobrado sobre o preço da carga do caminhão e que depende do estado de origem;
4- O valor total transportado pelo caminhão, carga mais imposto.*/

#include <stdio.h>

int main(){
  float cod, codcarga, peso, quilos, preco, imposto, total;
  
  printf("Digite o código do estado de origem da carga de um caminhão, numero inteiro entre 1 e 5:\n");
  scanf("%f", &cod);//a
  printf("Digite o peso da carga do caminhão em toneladas:\n");
  scanf("%f", &peso);//b
  printf("Digite o código da carga, numero inteiro entre 10 e 40:\n");
  scanf("%f", &codcarga);//c

//atribuindo preco por quilos no cod da carga
  if(codcarga >= 10 && codcarga <=20){
    codcarga = 100;
  }
  else if(codcarga >= 21 && codcarga <=30){
    codcarga = 250;
  }
  else if(codcarga >= 31 && codcarga <=40){
    codcarga = 340;
  }
  else{
    printf("Valor invalido!");
  }
  //atribuindo valor de imposto no cod do estado
  if(cod == 1){
    cod = 0.35;
  }
  else if(cod == 2){
    cod = 0.25;
  }
  else if(cod == 3){
    cod = 0.15;
  }
  else if(cod == 4){
    cod = 0.05;
  }
  else if(cod == 5){
    cod = 0;
  }
  else{
    printf("Valor invalido!");
  }
  
   quilos = peso * 1000;//1
   preco = quilos * codcarga;//2
   imposto = preco * cod;//3
   total = preco + imposto;//4
  
  //imprimindo resultados
  printf("O peso da carga do caminhão convertido em quilos e: %.2f kg\n", quilos);
  printf("O preço da carga do caminhão e: %.2f\n", preco);
  printf("Valor do imposto e: %.2f\n", imposto);
  printf("Valor total e: %.2f\n", total);
  
}
