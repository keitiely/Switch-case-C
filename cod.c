/*8- Faça um programa que receba:
  a- O código de um produto comprado, supondo que a digitação do código do produto seja sempre válida, ou seja, um número inteiro entre 1 e 10;
  b- O peso do produto em quilos;
  c- O código do país de origem, supondo que a digitação do código do país seja sempre válida, ou seja, um número entre 1 e 3.
  
  
  Calcule e mostre:
1-O peso do produto convertido em gramas;
2-O preço total do produto comprado;
3-O valor do imposto, sabendo-se que o imposto é cobrado sobre o preço total do produto comprado e que depende do país de origem;
4-O valor total, preço total do produto mais imposto.*/

#include <stdio.h>

int main(){
  float cod, codpais, peso, gramas, preco, imposto, total;
  
  printf("Digite o codigo do produto, numero inteiro entre 1 e 10:\n");
  scanf("%f", &cod);//a
  printf("digite o peso do produto em quilos:\n");
  scanf("%f", &peso);//b
  printf("Digite o codigo do pais de origem, numero inteiro entre 1 e 3:\n");
  scanf("%f", &codpais);//c

//atribuindo preco por gramas no cod do produto
  if(cod >= 1 && cod <=4){
    cod = 10;
  }
  else if(cod >= 5 && cod <=7){
    cod = 25;
  }
  else if(cod >= 8 && cod <=10){
    cod = 35;
  }
  else{
    printf("Valor invalido!");
  }
  //atribuindo valor de imposto no cod do pais
  if(codpais == 1){
    codpais = 0;
  }
  else if(codpais == 2){
    codpais = 0.15;
  }
  else if(codpais == 3){
    codpais = 0.25;
  }
  else{
    printf("Valor invalido!");
  }
   gramas = peso * 1000;//1
   preco = gramas * cod;//2
   imposto = preco * codpais;//3
   total = preco + imposto;//4
  
  //imprimindo resultados
  printf("O peso do produto convertido em gramas e: %.2f gramas\n", gramas);
  printf("O preço total do produto comprado e: %.2f\n", preco);
  printf("O valor do imposto e: %.2f\n", imposto);
  printf("O valor total e: %.0f\n", total);
  
}
