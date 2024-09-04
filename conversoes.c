
/*12- Escreva um programa em C que funcione como um conversor de unidades. O programa deve permitir a conversão entre diferentes unidades de temperatura
Celsius, Fahrenheit, Kelvin), distância (metros, quilômetros, milhas), e tempo (segundos, minutos, horas).

Use um switch para determinar o tipo de conversão e as unidades de entrada e saída.

Exemplo de Entrada:
Tipo de conversão: Temperatura Unidade de origem: Celsius Unidade de destino: Fahrenheit Valor: 25

Exemplo de Saída:
"25 Celsius é equivalente a 77 Fahrenheit."*/

#include<stdio.h>
int main(){
  float valor1, result;
  int destino, origem, conversao;
  
  printf("Qual conversao deseja fazer?\n");
  printf("(1) Temperatura\n");
  printf("(2) Distancia\n");
  printf("(3) Tempo\n");
  scanf("%d", &conversao);

  switch(conversao){
    //temperatura
    case 1:
    printf("Digite o numero correspondente da unidade e para qual deseja converter, separado por espaco:\n(1) Celsius\n(2) Fahrenheit\n(3) Kelvin\n");
    scanf("%d %d", &origem, &destino);
    printf("Digite o valor:\n");
      scanf("%f", &valor1);
      
    //celsius para fahrenheit F= C x 1,8 + 32
    if(origem==1 && destino==2 ){
      result = (valor1 * 1.8) + 32;
      printf("%.1f celsius equivale a %.1f Faherenheit", valor1, result);
    }
    //celsius para kelvin K = C + 273
    else if(origem==1 && destino==3 ){
      result = valor1 + 273;
      printf("%.1f celsius equivale a %.1f Faherenheit", valor1, result);
    }
    //fahrenheit para celsius C= (F-32) / 1,8
    else if(origem==2 && destino==1 ){
      result = (valor1-32)/1.8;
      printf("%.1f Faherenheit equivale a %.1f celsius", valor1, result);
    }
    //fahrenheit para kelvin K= (F-32) x 5/9 + 273
    else if(origem==2 && destino==3 ){
      result = (valor1-32) * 5/9 + 273;
      printf("%.1f Faherenheit equivale a %.1f Kelvin", valor1, result);
    }
    //kelvin para celsius C= К - 273
    else if(origem==3 && destino==1 ){
      result = valor1 - 273;
      printf("%.1f Kelvin equivale a %.1f Celsius", valor1, result);
    }
    //kelvin para fahrenheit K= (K-273) x 1,8 + 32
    else if(origem==3 && destino==2 ){
      result = (valor1 - 273) * 1.8 + 32;
      printf("%.1f Kelvin equivale a %.1f Fahrenheit", valor1, result);
    }
    break;
    //Distancia
    case 2:
    printf("Digite o numero correspondente da unidade e para qual deseja converter, separado por espaco:\n(1) Metros\n(2) Quilometros\n(3) Milhas\n");
    scanf("%d %d", &origem, &destino);
    printf("Digite o valor:\n");
    scanf("%f", &valor1);
    //metros para quilometros
    if(origem==1 && destino==2){
      result = valor1 / 1000;
      printf("%.1f metros equivale a %.1f quilometros", valor1, result);
    }
    //metros para milhas
    else if(origem==1 && destino==3){
      result = valor1 / 1609;
      printf("%.1f metros equivale a %.1f milhas", valor1, result);
    }
    //quilometros para metros
    else if(origem==2 && destino==1){
      result = valor1 * 1000;
      printf("%.1f quilometros equivale a %.1f metros", valor1, result);
    }
    //quilometros para milhas
    else if(origem==2 && destino==3){
      result = valor1 / 1.609;
      printf("%.1f quilometros equivale a %.1f milhas", valor1, result);
    }
    //milhas para metros
    else if(origem==3 && destino==1){
      result = valor1 * 1609;
      printf("%.1f milhas equivale a %.1f metros", valor1, result);
    }
    //milhas para quilometros
    else if(origem==3 && destino==2){
      result = valor1 * 1.609;
      printf("%.1f milhas equivale a %.1f quilometros", valor1, result);
    }
    break;
    //Tempo
    case 3:
      printf("Digite o numero correspondente da unidade e para qual deseja converter, separado por espaco:\n(1) Horas\n(2) Minutos\n(3) Segundos\n");
      scanf("%d %d", &origem, &destino);
      printf("Digite o valor:\n");
      scanf("%f", &valor1);
    //horas para minutos
    if(origem==1 && destino==2){
      result = valor1 * 60;
      printf("%.1f horas equivale a %.1f minutos", valor1, result);
    }
    //horas para segundos
    else if(origem==1 && destino==3){
      result = valor1 * 3600;
      printf("%.1f horas equivale a %.1f segundos", valor1, result);
    }
    //minutos para horas
    else if(origem==2 && destino==1){
      result = valor1 / 60;
      printf("%.1f minutos equivale a %.1f horas", valor1, result);
    }
    //minutos para segundos
    else if(origem==2 && destino==3){
      result = valor1 * 60;
      printf("%.1f minutos equivale a %.1f segundos", valor1, result);
    }
    //segundos para horas
    else if(origem==3 && destino==1){
      result= valor1 / 360;
      printf("%.1f segundos equivale a %.1f horas", valor1, result);
    }
    //segundos para minutos
    else if(origem==3 && destino==2){
      result = valor1 / 60;
      printf("%.1f segundos equivale a %.1f minutos", valor1, result);
    }
    break;
    default:
    printf("Valor invalido!");
    break;
  }
}
