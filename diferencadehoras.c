//Faça um programa que receba a hora de início de um jogo e a hora final do jogo (cada hora é composta por duas variáveis inteiras: hora e minuto). Calcule e mostre a duração do jogo (horas e minutos) sabendo-se que o tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.

#include <stdio.h>
#include <math.h>

int main(){
  int hInicio, hFim, minInicio, minFim, hDuracao, minDuracao;

  printf("Digite a hora de inicio do jogo e os minutos separados por espaco:\n");
  scanf("%d %d", &hInicio, &minInicio);
  printf("Digite a hora do termino do jogo e os minutos separados por espaco:\n");
  scanf("%d %d", &hFim, &minFim);

  hDuracao = hFim - hInicio;
  minDuracao = minFim - minInicio;
  
    if(hInicio == hFim && minInicio == minFim){
      printf("Tempo maximo de duracao de jogo 24 horas!");
    }
      // caso minutos for negativo e horas positivo: ex 13h 40m - 21h 30m = 7h e 50m
    else if(hDuracao > 0 && minDuracao < 0){
    printf("A duracao do jogo e %d horas e %d minutos", hDuracao - 1, minDuracao + 60);
    }
      // caso horas e minutos for negativo: 23h 30m - 12h 15m = 12h e 45m
    else if(hDuracao < 0 && minDuracao < 0){
      printf("A duracao do jogo e %d horas e %d minutos", (hDuracao + 24) - 1, minDuracao + 60);  
    }
    // caso horas for negativo e minutos positivo: 23h 00m - 5h 30m = 6h 30m
  else if(hDuracao < 0 && minDuracao > 0){
    printf("A duracao do jogo e %d horas e %d minutos", hDuracao + 24, minDuracao);
  }
}
