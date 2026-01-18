#include <stdio.h>

int main()
{

    // Declaração de variáveis para movimentos
    int torre = 0, bispo = 0, rainha = 0, cavalo = 0;

    // Mensagem de inicialização do programa
    printf("Movimentos das Peças de Xadrez:\n");
    printf("------------------------------\n");
    printf("Movimentos do Torre: \n");

    // Loop para simular os movimentos da torre
    for (torre = 0; torre < 5; torre++)
    {
        printf("Direita \n");
    }
    printf("------------------------------\n");

    // Mensagem para movimentos do bispo
    printf("Movimentos do Bispo: \n");

    // Loop para simular os movimentos do bispo
    while (bispo < 5)
    {
        printf("Cima, Direita \n");
        bispo++;
    }
    printf("------------------------------\n");

    // Mensagem para movimentos da rainha
    printf("Movimentos da Rainha: \n");

    // Loop para simular os movimentos da rainha
    do
    {
        printf("Esquerda \n");
        rainha++;
    } while (rainha < 8);
    printf("------------------------------\n");

    // Mensagem para movimentos do cavalo
    printf("Movimentos do Cavalo: \n");

    // Loop aninhado para simular os movimentos do cavalo
    int i, j = 0; // Declaração de variáveis de controle

    for (i = 0; i < 1; i++) // Loop externo
    {
        while (j < 2) // Loop interno
        {
            printf("Cima\n");
            j++;
        }
        printf("Direita\n");
    }

    // Finalização do programa
    printf("------------------------------\n");

    return 0;
}