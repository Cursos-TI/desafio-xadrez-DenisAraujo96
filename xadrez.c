#include <stdio.h>

int main() {
  //mover a torre 5 casas para a direita
  for(int i = 0; i < 5; i++){
    printf("Direita\n");//imprime a direção do movimento
  }                   //bispo
  for (int i = 0; i < 5; i++){
    printf("Cima Direita\n");//imprime a direção do movimento
  }                   //rainha
  for (int i = 0; i < 8; i++){
    printf("Esquerda\n");
  }                   //cavalo
  for (int i = 0; i < 2; i++ ){//loop para mover as duas casas para baixo
    printf("baixo\n");
  }
  int j = 0;
  while (j < 1){
    printf("esquerda\n");
    j++;
  }
  {
  
  }
  
  
    return 0;
}
