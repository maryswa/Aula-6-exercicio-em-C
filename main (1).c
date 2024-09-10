#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  //Mensagemd e boas vindas
  printf("Seja Bem vindo ao jogo!");


  //Gerando um numero secreto aleatorio
  int segundos = time(0);
  srand(segundos);

  int numero = rand();
  int numeroSecreto = numero % 100;
  int chute;
  int ganhou = 0;
  int tentativas = 1;

  //Construdo o loop de repetição
  while (ganhou == 0){
    printf("-----Tentativa %d-----\n", tentativas);
    printf("Digite seu chute:");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    int acertou = (chute == numeroSecreto);
    int maior = (chute > numeroSecreto);

    //verificando os valores do chute
    if (acertou){
      printf("Parabéns! Você acertou!\n");
      ganhou = 1;
    }
    else if (maior) {
      printf("seu chute foi maior que o numero secreto\n");
    }
    else{
      printf("seu chute foi menor que o numero secreto\n");
    }
    tentativas++;
  }
  return 0;
}