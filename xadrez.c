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
//Função para mover Bispo usando loops aninhados
void moverBispoComLoops(int movimentosVesticais, int movimentoHorizontais) {
    for (int i = 0; i < movimentosVesticais; i++) {
        for  (int j = 0; j < movimentoHorizontais; j++){
            printf("Cima, Direita\n");
        }
    }
}
//Movimento complexo do Cavalo (duas casas para cima e uma para direita)
void moverCavalo() {
    printf("Movimento do Cavalo:n");
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int i = 0; i < 3;i++)  {
        //Testa até 3 possiveis movimento
        for (int j = 0; j < 3; j++) {
            //Condição para formar "L"(2 para cima e 1 para direita)
            if (i == movimentosVerticais && j == movimentosHorizontais) {
                printf("Cima\n")
                printf("CIma\n")
                printf("Direita\n")
                break;
                //Sai após o movimento ser realizado
            } else {
                continue;
                //Continua procurando a combinação correta
            }
    }

     
    }
    printf("\n")
}

int main () {
    //Movimento da Torre - recursivo
    printf("Movimento da Torre:\n")
    int casasTorre = 5;
    moverTorre(casasTorre)
    printf("\n");

    //Movimento do Bispo - recursivo
    printf("Movimento do Bispo (recursivo):\n");
    int casaBispo = 5;
    moverBisporecursivo(casaBispo);
    printf("\n");

    //Movimento Rainha - recursivo
    printf("Movimento Rainha:\n");
    int casasRainha = 8;
    moverRainha(casasRainha);
    printf("\n");

    //Movimento do Cavalo - com loops complexos
    moverCavalo();

    //Movimento do Bispo - com loops aninhados
    printf("Movimmento do Bispo (com loops aninhados):\n");
    int movimentosVerticais = 2;
    int movimentosHorizontais = 2;
    moverBispoComLoops(movimentosVerticais,movimentosHorizontais);
    printf("\n");

    return 0;


}