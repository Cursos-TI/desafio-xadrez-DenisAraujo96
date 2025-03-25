#include <stdio.h>

// Função recursiva para mover a torre 5 casas para a direita
void moverTorre(int passos) {
    if (passos == 0) return; 
    
    printf("jogada torre:\t Direita\n");//minha ideia inicial era colocar o jogada torre no inicio antes do loop, tive dificuldades, então resolvi usar o \t pra organizar
    moverTorre(passos - 1); 
}

// Função recursiva para mover o bispo 5 casas na diagonal superior direita
void moverBispo(int passos) {
    if (passos == 0) return; 
    printf("jogada bispo:\t Cima Direita\n");
    moverBispo(passos - 1); 
}

// Função recursiva para mover a rainha 8 casas para a esquerda
void moverRainha(int passos) {
    if (passos == 0) return; 
    printf("jogada rainha:\t Esquerda\n");
    moverRainha(passos - 1); 
}

// Função recursiva para mover 2 casas para baixo
void moverParaBaixo(int passos) {
    if (passos == 0) return; 
    printf("Baixo\n");
    moverParaBaixo(passos - 1); 
}

int main() {
    // Movendo a torre
    moverTorre(5);

    // Movendo o bispo
    moverBispo(5);

    // Movendo a rainha
    moverRainha(8);

    // Movendo o cavalo com loop complexo
    for (int movimento = 0; movimento < 3; movimento++) {
      if (movimento < 2) { // Nos dois primeiros movimentos, vai para a esquerda
          printf("jogada cavalo:\t Esquerda\n");
      } else { // No terceiro movimento, vai para baixo
          printf("jogada cavalo:\t Baixo\n");
      }//tambem tive dificuldades em fazer esse movimento em linguagem recursiva, então fiz com if else pra deixar o codigo funcionando
  }

  return 0;
}
/* ****essa era minha logica em recursiva mas não consegui fazer rodar****
// Função recursiva para movimentar o cavalo
void moverCavalo(int passos) {
    if (passos == 0) return;
    
    if (passos > 1) { 
        printf("jogada cavalo:\t Esquerda\n");
    } else { // No último passo, o cavalo vai para baixo
        printf("jogada cavalo:\t Baixo\n");
    }
    
    moverCavalo(passos - 1);
}

*/
