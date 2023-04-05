//Faça um programa que simule a Torre de Hanoi, onde o usuário informa a quantidade inicial de discos e no final informa os movimentos minimos necessários para a solução da torre e quantidade minima de movimentos realizados.
//by: Guilherme Mendes, Carlos Jozala, Gledson Rocha, Rafael Koguchi & João Gustavo
//Prof: Joaquim Junior 

#include <stdio.h>

// Função recursiva para mover os discos da torre
void mover_disco(int n, char origem, char destino, char auxiliar, int *movimentos) {
    if (n == 1) {
        printf("Mova o disco 1 da torre %c para a torre %c\n", origem, destino);
        (*movimentos)++;
        return;
    }
    mover_disco(n-1, origem, auxiliar, destino, movimentos);
    printf("Mova o disco %d da torre %c para a torre %c\n", n, origem, destino);
    (*movimentos)++;
    mover_disco(n-1, auxiliar, destino, origem, movimentos);
}

int main() {
    int n, movimentos = 0;
    printf("Digite o numero inicial de discos: ");
    scanf("%d", &n);
    mover_disco(n, 'A', 'C', 'B', &movimentos);
    printf("Quantidade minima de movimentos necessarios: %d\n", (1 << n) - 1);
    printf("Quantidade de movimentos realizados: %d\n", movimentos);
    return 0;
}

