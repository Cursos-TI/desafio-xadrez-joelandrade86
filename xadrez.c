#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

        int i = 0;
        int linha_atual = 3; // Posição inicial da linha 
        int coluna_atual = 4; // Posição inicial da coluna 
        int movimentos = 0;
        // Nível Novato - Movimentação das Peças
        // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
        // Implementação de Movimentação do Bispo
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
        printf("\nMovimento do Bispo:\n");
    
    while (i < 2) {
       printf("Cima, Direita\n");
        i++;
    }
        // Implementação de Movimentação da Torre
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
        printf("\nMovimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
        // Implementação de Movimentação da Rainha
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
     printf("\nMovimento da Rainha:\n");
    do {
     
      printf("esquerda\n");
      i++;
    } while (i < 8);
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    printf("\nMovimento do Cavalo:\n");
 
    // Loop while para o movimento perpendicular (uma casa para a esquerda)
    while (movimentos < 3) {

         // Loop for para controlar o movimento principal (duas casas para baixo)
        
        for (int i = 0; i < 2; i++) {
        
            printf("baixo \n");
            movimentos++;
        }
        printf("esquerda \n");
        movimentos++;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
