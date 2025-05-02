#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void Bispo(char sentido[10], char direcao[10], int casas){
    for(int i = casas; i > 0; i--){
        printf("[Bispo] %s! %s!\n", sentido, direcao); 
    }
}

void Torre(char direcao[10], int casas){
    for(int i = casas; i > 0; i--){
        printf("[Torre] %s!\n", direcao); 
    }
}

void Rainha(char direcao[10],int casas){
    for(int i = casas; i > 0; i--){
        printf("[Rainha] %s!\n", direcao); 
    }
}

void Cavalo(char direcao[10], char sentido[10]){
    int movimentoCavalo = 1;

    while(movimentoCavalo >= 0){
        for(movimentoCavalo = 1; movimentoCavalo >= 0; movimentoCavalo--){
            printf("[Cavalo] %s! \n", direcao);
        }
        printf("[Cavalo] %s! \n", sentido);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    Bispo("avança", "direita", 5);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    Torre("direita", 5);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    Rainha("esquerda", 8);

    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    Cavalo("recua", "esquerda");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
