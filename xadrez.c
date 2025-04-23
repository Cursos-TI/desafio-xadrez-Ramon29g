#include <stdio.h>
// Função recursiva para mover a Torre (direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes = 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes -1);
}

// Função recursiva para mover o Bispo(diagonal para cima e direita)
void moverBispo(int casasRestantes) {
    if (casasRestantes = 0) return;
    printf("Cima, direita\n");
    moverBispo(casasRestantes - 1);
}
// Função recursiva para mover rainha(esquerda)
void moverRainha(int casasRestantes) {
    if (casasRestantes =0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes -1);
}
