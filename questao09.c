/*Você pode criar um programa em C para definir uma matriz com 3 linhas e 4 colunas, criar vetores para armazenar a soma dos valores de cada linha e a multiplicação dos valores de cada coluna e, em seguida, imprimir esses vetores. Aqui está um exemplo de código*/

#include <stdio.h>

int main() {
    int matriz[3][4];
    int somaLinhas[3] = {0};
    int multiplicacaoColunas[4] = {1};

    // Preencher a matriz com valores
    printf("Digite os elementos da matriz 3x4:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o elemento na linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcular a soma dos valores de cada linha e a multiplicação dos valores de cada coluna
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            somaLinhas[i] += matriz[i][j];
            multiplicacaoColunas[j] *= matriz[i][j];
        }
    }

    // Imprimir os vetores
    printf("Vetor de soma das linhas:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", somaLinhas[i]);
    }
    printf("\n");

    printf("Vetor de multiplicação das colunas:\n");
    for (int j = 0; j < 4; j++) {
        printf("%d ", multiplicacaoColunas[j]);
    }
    printf("\n");

    return 0;
}

/*Neste programa, o usuário insere os elementos da matriz 3x4. Em seguida, o programa calcula a soma dos valores de cada linha e a multiplicação dos valores de cada coluna. Por fim, ele imprime os vetores contendo a soma das linhas e a multiplicação das colunas. Certifique-se de compilar e executar o programa em um ambiente C compatível.*/