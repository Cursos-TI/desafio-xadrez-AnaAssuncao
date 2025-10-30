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

    // ===================== CAVALO =====================
    // Movimento: 2 casas para baixo e 1 para a esquerda (usando loops aninhados)
    printf("\n===== Movimento do CAVALO =====\n");
    int linhaCavalo = 4;
    int colunaCavalo = 4;
    char cavalo = 'C';
    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("O Cavalo se move em 'L' (2 para Baixo, 1 para Esquerda):\n\n");

    // Primeiro loop FOR: move 2 casas para baixo
    for (int i = 1; i <= casasBaixo; i++)
    {
        linhaCavalo++;
        printf("Passo %d: Baixo\n", i);

        // Loop interno WHILE para simular a segunda parte do movimento (1 para a esquerda)
        if (i == casasBaixo) // só move para a esquerda após terminar as 2 casas para baixo
        {
            int contador = 1;
            while (contador <= casasEsquerda)
            {
                colunaCavalo--;
                printf("Passo %d: Esquerda\n", i + contador);
                contador++;
            }
        }
    }

    printf("===== Fim da Simulação =====\n");

    return 0;
}