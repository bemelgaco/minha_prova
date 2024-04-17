// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
    int portaEscolhida , portaVazia , portaPremiada;
    int s, n;

    srand(time(NULL));
    portaPremiada = rand () %3 + 1;


    printf("Bem-vindo ao jogo Monty Hall!");
    printf("escolha uma porta(1,2 ou 3):\n");
    scanf("%d",&portaEscolhida);

    if(portaEscolhida == portaPremiada){
    printf("você encontrou a porta premiada.\n");
}else{
    printf("porta vazia,quer tentar novamente?\n");
   char opcao ;
    scanf(" %c", &opcao);
}
   if (portaEscolhida != portaPremiada){
  printf("você encontrou a porta premiada\n");
}else{
    printf("porta vazia,quer tentar novamente?\n");
     char opcao ;
    scanf(" %c", &opcao);
}

}






