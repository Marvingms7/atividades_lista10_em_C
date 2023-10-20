/*Aqui está um programa em C que cria uma matriz de 5x5 de números reais e coloca o conteúdo de sua diagonal principal em um vetor, em seguida, imprime o vetor*/


#include <stdio.h>

int main() {
    float matriz[5][5];
    float diagonalPrincipal[5];
    
    // Preencher a matriz com números reais
    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite o elemento na linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }

    // Copiar a diagonal principal para o vetor
    for (int i = 0; i < 5; i++) {
        diagonalPrincipal[i] = matriz[i][i];
    }

    // Imprimir o vetor da diagonal principal
    printf("Elementos da diagonal principal:\n");
    for (int i = 0; i < 5; i++) {
        printf("%f\n", diagonalPrincipal[i]);
    }

    return 0;
}

/*Neste programa, o usuário insere os elementos da matriz 5x5. Em seguida, a diagonal principal (os elementos onde a linha é igual à coluna) é copiada para o vetor diagonalPrincipal. Por fim, os elementos do vetor diagonalPrincipal são impressos na tela. Certifique-se de compilar e executar o programa em um ambiente C compatível.*/
