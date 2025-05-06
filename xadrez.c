#include <stdio.h>

// Função recursiva para o movimento do Bispo (agora também com loops aninhados)
void moverBispoRecursivo(int vertical, int horizontal) {
    if (vertical > 0) {
        for (int j = 0; j < horizontal; j++) {
            printf("Cima, Direita\n");
        }
        moverBispoRecursivo(vertical - 1, horizontal);
    }
}

// Função recursiva para o movimento da Torre
void moverTorreRecursivo(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorreRecursivo(casas - 1);
    }
}

// Função recursiva para o movimento da Rainha
void moverRainhaRecursivo(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainhaRecursivo(casas - 1);
    }
}

int main() {
    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(5, 1); // Move cinco vezes "Cima, Direita"

    printf("\nMovimento da Torre:\n");
    moverTorreRecursivo(5); // Move cinco vezes "Direita"

    printf("\nMovimento da Rainha:\n");
    moverRainhaRecursivo(8); // Move oito vezes "Esquerda"

    printf("\nMovimento do Cavalo:\n");
    int movimentos_cavalo = 0;
    for (int cima = 0; cima < 1; cima++) {
        for (int direita = 0; direita < 2; direita++) {
            printf("Cima\n");
            movimentos_cavalo++;
            if (movimentos_cavalo == 6) break; // Limita a um movimento em "L" completo
        }
        if (movimentos_cavalo < 6) {
            printf("Direita\n");
            movimentos_cavalo++;
        }
        if (movimentos_cavalo == 7) break; // Limita a um movimento em "L" completo
    }

    return 0;
}