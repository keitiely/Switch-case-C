/*11-Desenvolva um programa em C que calcule a média ponderada de um aluno com base em quatro notas e diferentes pesos atribuídos a cada nota. O usuário deve poder escolher um dos três métodos de cálculo de média:
a- Média Aritmética Simples
b- Média Ponderada com pesos específicos

Use um switch para permitir ao usuário escolher o tipo de média a ser calculada e exiba o resultado final.

Exemplo de Entrada:
Notas: 8.0, 7.5, 9.0, 10.0
Pesos: 1, 2, 3, 4
Método de Cálculo: 2 (Média Ponderada)
Exemplo de Saída:
"A média ponderada é 8.75." */

#include <stdio.h>
int main(){
  float n1, n2, n3, n4, media;
  int p1, p2, p3, p4, med;
  printf("Qual media deseja calcular?\n");
  printf("(1) Media Aritmetica\n");
  printf("(2) Media Ponderada\n");
  scanf("%d", &med);
  
  switch(med){
    case 1://media aritmetica
      printf("Digite as quatro notas separado por espacos:\n");
      scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
      
      media = (n1 + n2 + n3 + n4)/4;
      
      printf("A media aritmetica e: %.2f", media);
    break;
  case 2://media ponderada
    printf("Digite as quatro notas separado por espaco:\n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    printf("Digite os quatro pesos separado por espaco:\n");
    scanf("%d %d %d %d", &p1, &p2, &p3, &p4);

      media = (n1*p1 + n2*p2 + n3*p3 + n4*p4) / (p1+ p2+ p3 + p4);

    printf("A media ponderada e: %.2f", media);
    
  }
}
