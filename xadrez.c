#include <stdio.h>

int main()
{

    // Declaração de variáveis para movimentos
    int torre, bispo, rainha = 0;

    // Mensagem de inicialização do programa
    printf("Movimentos das Peças de Xadrez:\n");
    printf("------------------------------\n");
    printf("Movimentos do Torre: \n");

    // Loop para simular os movimentos da torre
    for (int torre = 0; torre < 5; torre++)
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

    // Finalização do programa
    printf("------------------------------\n");

    return 0;
}