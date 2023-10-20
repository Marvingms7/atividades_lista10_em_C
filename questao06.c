/*Aqui está um programa em C que gera uma matriz de inteiros de 4 linhas por 4 colunas e cria sua matriz transposta, trocando as linhas pelas colunas*/
#include <stdio.h>

int main() {
    int matriz[4][4];
    int transposta[4][4];

    // Preencher a matriz com números inteiros
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o elemento na linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Criar a matriz transposta
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    // Imprimir a matriz original
    printf("Matriz Original:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprimir a matriz transposta
    printf("Matriz Transposta:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*Neste programa, o usuário insere os elementos da matriz 4x4. Em seguida, a matriz transposta é criada trocando as linhas pelas colunas. Por fim, o programa imprime a matriz original e a matriz transposta. Certifique-se de compilar e executar o programa em um ambiente C compatível*/
