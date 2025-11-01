#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para mover a Torre (para a direita)
// ===================== TORRE =====================
void moverTorre(int casasRestantes, int passoAtual)
{
    if (casasRestantes == 0)
        return;

    printf("Passo %d: Direita\n", passoAtual);
    moverTorre(casasRestantes - 1, passoAtual + 1);
}

// ===================== RAINHA =====================
void moverRainha(int casasRestantes, int passoAtual)
{
    if (casasRestantes == 0)
        return;

    printf("Passo %d: Esquerda\n", passoAtual);
    moverRainha(casasRestantes - 1, passoAtual + 1);
}

// ===================== BISPO =====================
// Recursivo + loops aninhados + contador de passo
void moverBispo(int casasRestantes, int passoAtual)
{
    if (casasRestantes == 0)
        return; // Condição de parada

    // Loop aninhado: for para "Cima", while para "Direita"
    for (int linha = 0; linha < 1; linha++)
    {
        printf("Cima\n");
        int coluna = 0;
        while (coluna < 1)
        {
            printf("Direita\n");
            coluna++;
        }
        printf("Passo %d: Cima, Direita\n", passoAtual);
    }

    moverBispo(casasRestantes - 1, passoAtual + 1); // Chamada recursiva
};

// ===================== Função principal =====================
int main()
{
    // ===================== TORRE =====================
    printf("===== Movimento da TORRE (Recursividade) =====\n");
    int casasTorre = 5;
    printf("A Torre se move %d casas para a direita:\n\n", casasTorre);
    moverTorre(casasTorre, 1);

    // ===================== BISPO =====================
    printf("\n===== Movimento do BISPO (Recursividade + Loops Aninhados) =====\n");
    int linhasColunasBispo = 5;
    printf("O Bispo se move na diagonal (Cima, Direita):\n\n");
    moverBispo(linhasColunasBispo, 1);

    // ===================== RAINHA =====================
    printf("\n===== Movimento da RAINHA (Recursividade) =====\n");
    int casasRainha = 8;
    printf("A Rainha se move %d casas para a esquerda:\n\n", casasRainha);
    moverRainha(casasRainha, 1);

    // ===================== CAVALO =====================
    printf("\n===== Movimento do CAVALO (Loops Complexos) =====\n");
    printf("O Cavalo se move em 'L' (2 para Cima e 1 para a Direita):\n\n");

    int movimentoVertical = 0;
    int movimentoHorizontal = 0;
    int limiteVertical = 2;
    int limiteHorizontal = 1;

    // Loop externo controla o movimento vertical
    for (int coluna = 1; coluna <= limiteVertical; coluna++)
    {
        movimentoVertical++;
        printf("Passo %d: Cima\n", coluna);

        // Loop interno controla o movimento horizontal
        for (int linha = 1; linha <= limiteHorizontal; linha++)
        {
            movimentoHorizontal++;

            // Exemplo de controle de fluxo com continue e break
            if (coluna == 1 && linha == 1)
            {
                continue; // ignora o primeiro ciclo horizontal
            }

            if (coluna == limiteVertical)
            {
                printf("Passo %d: Direita\n", coluna + linha);
                break; // encerra o loop após completar o "L"
            }
        }
    }

    printf("\n===== Fim da Simulação =====\n");

    return 0;
}