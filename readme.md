Estrutura de repetição

For
While
Do-while
Loop Aninhados
Loop Avançados
Recursividades

Necessidade:
Permite execução repetida de instruções
Cruciais para programas eficazes e de fácil manutenção

Vantagens:
Evitam duplicação manual do código
Reduzem scripts longos, redundantes e propensos a erros

Tipos de Estruturas de repetição
For
While
Do-While

Aplicações:
Processamentos de grandes volumes de dados
Execução de operações matemáticas complexas

Desafios
Compreensão da logica
Erro comum: loop infinito

Como estudar:
Reconhecimento de padrões
Entendimento dos conceitos
Criação de algoritmos
Experimentação
Pratica constante

Estrutura "while"

    Definição:
        Executa repetidamente
        Depende de uma condição verdadeira
        Termina quando a condição se torna falsa
    Resumo: é uma estrutura que vai repetir o codigo até que encontre uma condição falsa

    Sintaxe basica:
        while (condição){
            //codigo
        }
    Condição é booleana (verdadeira ou falsa)

    int main() {
        int i = 1; // variavel de incremento

        while (i <= 5) { //Condição = Enquanto "i" for menor ou igual a 5 o codigo repeti.
            printf("%d\n", i); // Saida
            i++; // Incremento
        }
    }

    Evitando loop infinito:
        Ocorre quando a condição nunca se torna falsa
        Pode travar o programa ou consumir muitos recursos
    Como previnir?
        Garantir que a condição se torne falsa

    Importância:
        Permite execução repetitiva
        Fundamental para qualquer programador
        Controle sobre a execução do codigo
        Criar programas eficientes e robustos
    Dica:
        A compreensão maior vem da prática
        Explorar formas de declarar o "while"

Estrutura "do-while"
Variante do while

    Principal diferença:
        Garante execução pelo menos uma vez

    Sintaxe basica:

        do {
            // Codigo
        } while (condição)

    Vantagens:
        Execução garantida
        Util para solicitações de entrada do usuario
        Util para menus interativos
        Verificação de condição posterior

    Importância:
        Fundamental para qualquer programador
        Controle sobre a execução do código
        Criar programas eficientes e robustos
    Dica:
        A compreenssão maior vem da prática
        Explorar formas de utilizar a primeira execução

Estrutura "For"
Definição:
Utilizado para loops de tamanho específico
Ideal quando sabemos quantas vezes será executado

    Sintaxe basica:

        for (inicialização; condição; incremento) {
            // Codigo
        }

        * Define valor inicial
        * Condição booleana
        * Incremento ou decremento

    Funcionamento:
        Inicialização: apenas uma vez
        Condição: Toda execução
        Incremento: no final da execução

    Vantagens:
        Codigo facil de ler e entender
        Numero fixo de execuções
        Uso de condicionais
        Incremento e decremento

    Importancia:
        Indispensavel para qualquer programador
        Controle sobre a execução do codigo
        Criar programas eficientes e robustos
        Codigos legíveis
    Dica:
        A compreensão maior vem da prática
        Explorar condicionais dentro do "for", incremento e decremento

Loops Aninhados
Fundamentais na programação
Muitos algoritmos utilizam loops aninhados
Cruciais para programas complexos e eficientes
Para algumas áreas, o conhecimento é obrigatório

    Vantagens:
        Resoluções de problemas mais complexos
        Iterações multiplas e hierárquicas
        Aplicação em matrizes e tabelas

    Cuidados:
        Uso pode causar ineficiência
        Requer organização do código
        Podem existir alternativas mais eficientes de uso
        Complexidade exponencial (exige mais da CPU)

    Aplicação:
        Algoritmos de força bruta (Algoritmos de Ordenação)
        Matrizes
        Criptografia e segurança

    Desafios:
        Compreensão da lógica e estrutura
        Erro comum: Acesso dos índices fora do limite

    Como estudar:
        Reconhecimento de padrões
        Entendimento dos conceitos
        Criação de algoritmos
        Experimentação
        Pratica constante

    O que são?
        Loop dentro de outro loop
        Usados para múltiplas dimensões de dados

    Funcionamento básico:

        estrutura (condição) {
            estrutura (condição) {
                // codigo
            }
        }

        Condição é booleana
        Estrutura interna e externa

    Execução básica

        estrutura (condição) {
            estrutura (condição) {
               // codigo
            }
        }

        Cada execução do loop externo, executará completamente o loop interno.

    Desempenho:
        Computacionamente caros
        Crescimento exponencial:
            O (n^2) para loops de "i" e "j"
            O (n^3) para loops de "i", "j" e "k"
            ...n

    Importância:
        Fundamental para qualquer programador
        Controle sobre a execução do codigo
        Criar programas eficientes e robustos
    Dica:
        A compreensão maior vem da prática
        Utilizar o "for" para praticar
        Não passar de O(n^3) quando praticar

Loops Avançados
O que vamos ver?
Formas não comuns de declarar loops
Especificidade, complexidade, necessidade

    Importância:
        Controle sobre a execução do codigo
        Criar programas eficientes e simples
        Requer entendimento do macro da aplicação
    Dica:
        A compreensão maior vem da pratica
        Explorar as alternativas de aplicação

Recursividade:
O que é um procedimento?
Bloco de código
Uteis para organizar e simplificar programas

    Exemplo de procedimento

        #include <stdio.h>

        // Definição de procedimento para imprimir uma mensagem
        void imprimirMensagem() {
            printf("Olá,mundo!\n");
        }

        int main() {

            // Chamada do procedimento
            imprimirMensagem();
            return 0;
        }

    O que é?
        Função que executa a si própria
        Pode substituir loops
        Dividir problemas complexos

    Importancia:
        Aplicação simples que resolve muitos problemas
        Auxilia na implementação de algoritmos
        Requer entendimento do macro da aplicação
    Dica:
        A compreensão maior vem da pratica
        Explorar as alternativas de aplicação
