#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void movimentobispo(int movimento) {
    for (int i = 1; i <= movimento; i++) {
        for (int j = 1; j <= movimento; j++) {
            if (i == j) {
                printf("O Bispo se moveu para a diagonal superior direita.\n");
            }
        }
    }
}
void movimentotorre(int movimento) {
    if (movimento > 0) {
        printf("A Torre se moveu para a direita.\n");
        movimentotorre(movimento - 1);   

    }
}

void movimentorainha(int movimento) {
    if (movimento > 0) {
        printf("A Rainha se moveu para a esquerda.\n");
        movimentorainha(movimento - 1);   
    }
}

void movimentocavalo(int movimento) {
    for (int l = 1, m = 1; l<= movimento && m <= l; l++, m++) {
        printf("O cavalo de moveu para cima. \n");
        if (m ==2) {
            printf("O cavalo se moveu para a direita. \n");
        }
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    //int movimentoBispo = 5; // Exemplo: O Bispo pode se mover até 5 casas em diagonal
    //int movimentoTorre = 5; // Exemplo: A Torre pode se mover até 5 casas na horizontal ou vertical
    //int movimentoRainha = 8; // Exemplo: A Rainha pode se mover até 8 casas em qualquer direção
    //int movimentocavalo = 2; // Exemplo: O Cavalo pode se mover 2 casas em L
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    //for (int i = 1; i <= movimentoBispo; i++) {
       // printf("O Bispo se moveu para a diagonal superior direita.\n", i);
    //}
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    //int j = 1;
    //while (j <= movimentoTorre) {
        //printf("A Torre se moveu para a direita.\n");
        //j++;
    //}
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    //int k = 1;
    //do {
        //printf("A Rainha se moveu para a esquerda.\n");
        //k++;
    //} while (k <= movimentoRainha);
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    //for (int l = 1; l <= movimentocavalo; l++) {
        //printf("O cavalo de moveu para baixo. \n");
        //for (int m = 2; m == l; m++) {
            //printf("O cavalo se moveu para a esquerda. \n");
        //}
    //}
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    int bispo = 5;
    int torre = 5;
    int rainha = 8;
    int cavalo = 2;

    printf("Desafio de Xadrez - MateCheck\n");
    printf("Nivel Mestre - Movimentação das Peças com Funções Recursivas\n");

    printf("Movimento do Bispo: %d casas\n", bispo);
    movimentobispo(bispo);

    printf("Movimento da Torre: %d casas\n", torre);
    movimentotorre(torre);

    printf("Movimento da Rainha: %d casas\n", rainha);
    movimentorainha(rainha);

    printf("Movimento do Cavalo: %d casas\n", cavalo);
    movimentocavalo(cavalo);
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
