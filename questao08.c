/*Aqui está um programa em C que permite ao usuário inserir os valores dos elementos de uma matriz quadrada de ordem 4 (4 linhas e 4 colunas) e realiza as funcionalidades solicitadas:*/
#include <stdio.h>

int main() {
    int matriz[4][4];
    int somaQuadradosPrimeiraColuna = 0;
    int somaTerceiraLinha = 0;
    int somaDiagonalPrincipal = 0;
    int somaElementosParesSegundaLinha = 0;

    // Preencher a matriz com valores inseridos pelo usuário
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o elemento na linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimir todos os elementos da matriz
    printf("Elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Somar os quadrados de todos os elementos da primeira coluna
    for (int i = 0; i < 4; i++) {
        somaQuadradosPrimeiraColuna += matriz[i][0] * matriz[i][0];
    }

    // Somar todos os elementos da terceira linha
    for (int j = 0; j < 4; j++) {
        somaTerceiraLinha += matriz[2][j];
    }

    // Somar os elementos da diagonal principal
    for (int i = 0; i < 4; i++) {
        somaDiagonalPrincipal += matriz[i][i];
    }

    // Somar todos os elementos de índice par da segunda linha
    for (int j = 0; j < 4; j += 2) {
        somaElementosParesSegundaLinha += matriz[1][j];
    }

    // Imprimir os resultados
    printf("Soma dos quadrados da primeira coluna: %d\n", somaQuadradosPrimeiraColuna);
    printf("Soma dos elementos da terceira linha: %d\n", somaTerceiraLinha);
    printf("Soma dos elementos da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("Soma dos elementos de índice par da segunda linha: %d\n", somaElementosParesSegundaLinha);

    return 0;
}

/*Neste programa, o usuário insere os elementos da matriz 4x4. Em seguida, o programa imprime a matriz, soma os quadrados da primeira coluna, soma todos os elementos da terceira linha, soma os elementos da diagonal principal e soma os elementos de índice par da segunda linha. Certifique-se de compilar e executar o programa em um ambiente C compatível.*/