#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
int main()
{
    // ===================== TORRE =====================
    // Movimento: 5 casas para a direita (usando FOR)
    printf("===== Movimento da TORRE =====\n");
    int linhaTorre = 3;  // linha inicial
    int colunaTorre = 0; // coluna inicial
    char torre = 'T';
    int casasTorre = 5;

    printf("A Torre se move 5 casas para a direita:\n\n");
    for (int passo = 1; passo <= casasTorre; passo++)
    {
        colunaTorre++; // move uma casa para a direita
        printf("Passo %d: Direita\n", passo);
    }

    // ===================== BISPO =====================
    // Movimento: 5 casas na diagonal (usando WHILE)
    printf("===== Movimento do BISPO =====\n");
    int linhaBispo = 6;
    int colunaBispo = 0;
    char bispo = 'B';
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("O Bispo se move 5 casas na diagonal (Cima, Direita):\n\n");

    while (contadorBispo <= casasBispo)
    {
        linhaBispo--;  // cima
        colunaBispo++; // direita
        printf("Passo %d: Cima, Direita\n", contadorBispo);
        contadorBispo++;
    }

    // ===================== RAINHA =====================
    // Movimento: 8 casas para a esquerda (usando DO-WHILE)
    printf("===== Movimento da RAINHA =====\n");
    int linhaRainha = 2;
    int colunaRainha = 7;
    char rainha = 'R';
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("A Rainha se move 8 casas para a esquerda:\n\n");

    do
    {
        colunaRainha--; // esquerda
        printf("Passo %d: Esquerda\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha && colunaRainha >= 0);

    printf("===== Fim da Simulação =====\n");

    return 0;
}