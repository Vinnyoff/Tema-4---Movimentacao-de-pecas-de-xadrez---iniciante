#include <stdio.h>

// Função recursiva para mover a torre
void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita \n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para mover o bispo
void moverBispo(int casas)
{
    if (casas > 0)
    {
        // Loop aninhado para simular o movimento diagonal do bispo
        for (int i = 0; i < 1; i++) // Loop externo
        {
            for (int j = 0; j < 1; j++) // Loop interno
            {
                printf("Cima \n");
            }
            printf("Direita \n");
        }
        moverBispo(casas - 1);
    }
}

// Função recursiva para mover a rainha
void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda \n");
        moverRainha(casas - 1);
    }
}

// Função com loops aninjados para mover o cavalo (movimento em L)
void moverCavalo(int movimentos)
{
    // i = numero de movimentos, j = primeira parte do L (vertical), k = segunda parte do L (horizontal)
    for (int i = 0; i < movimentos; i++) // i controla quantos movimentos completos em L
    {
        for (int j = 0; j < 2; j++) // j = 2 passos para cima
        {
            printf("Cima \n");
        }
        for (int k = 0; k < 1; k++) // k = 1 passo para a direita
        {
            printf("Direita \n");
        }
    }
}

int main()
{

    // Declaração de variáveis para movimentos
    int movimentosTorre = 5;
    int movimentosBispo = 5;
    int movimentosRainha = 8;
    int movimentosCavalo = 1;
    // Mensagem de inicialização do programa
    printf("Movimentos das Peças de Xadrez:\n");
    printf("------------------------------\n");
    printf("Movimentos do Torre: \n");

    // Chamada da função recursiva para mover a torre
    moverTorre(movimentosTorre);
    printf("------------------------------\n");

    // Mensagem para movimentos do bispo
    printf("Movimentos do Bispo: \n");

    // Chamada da função recursiva para mover o bispo
    moverBispo(movimentosBispo);
    printf("------------------------------\n");

    // Mensagem para movimentos da rainha
    printf("Movimentos da Rainha: \n");

    // Chamada da função recursiva para mover a rainha
    moverRainha(movimentosRainha);
    printf("------------------------------\n");

    // Mensagem para movimentos do cavalo
    printf("Movimentos do Cavalo: \n");

    // Chamada da função com loops aninhados para mover o cavalo
    moverCavalo(movimentosCavalo);

    // Finalização do programa
    printf("------------------------------\n");

    return 0;
}