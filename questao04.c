/*Aqui está um algoritmo em C que constrói uma matriz de 10 linhas e 15 colunas contendo números inteiros, calcula a soma dos elementos de cada linha e coluna, e determina se a soma é par ou ímpar*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[10][15];
    int somaLinhas[10];
    int somaColunas[15];
    int i, j;

    // Seed para a geração de números aleatórios
    srand(time(NULL));

    // Preencher a matriz com números inteiros aleatórios
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 15; j++) {
            matriz[i][j] = rand() % 100; // Números aleatórios entre 0 e 99
        }
    }

    // Calcular a soma dos elementos de cada linha
    for (i = 0; i < 10; i++) {
        somaLinhas[i] = 0;
        for (j = 0; j < 15; j++) {
            somaLinhas[i] += matriz[i][j];
        }
    }

    // Calcular a soma dos elementos de cada coluna
    for (j = 0; j < 15; j++) {
        somaColunas[j] = 0;
        for (i = 0; i < 10; i++) {
            somaColunas[j] += matriz[i][j];
        }
    }

    // Imprimir a matriz
    printf("Matriz:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 15; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprimir a soma das linhas e determinar se é par ou ímpar
    for (i = 0; i < 10; i++) {
        printf("Soma dos elementos da linha %d: %d, ", i, somaLinhas[i]);
        if (somaLinhas[i] % 2 == 0) {
            printf("par\n");
        } else {
            printf("ímpar\n");
        }
    }

    // Imprimir a soma das colunas e determinar se é par ou ímpar
    for (j = 0; j < 15; j++) {
        printf("Soma dos elementos da coluna %d: %d, ", j, somaColunas[j]);
        if (somaColunas[j] % 2 == 0) {
            printf("par\n");
        } else {
            printf("ímpar\n");
        }
    }

    return 0;
}

/*Neste programa, geramos aleatoriamente números inteiros para preencher a matriz de 10x15. Em seguida, calculamos a soma dos elementos de cada linha e coluna e determinamos se a soma é par ou ímpar. Por fim, exibimos a matriz, a soma das linhas e a soma das colunas, indicando se são pares ou ímpares. Certifique-se de compilar e executar o programa em um ambiente C compatível*/