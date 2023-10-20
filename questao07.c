/*Aqui está um programa em C que lê valores inteiros para uma matriz de 5 linhas por 5 colunas e depois lê um valor numérico X. O programa conta quantos valores na matriz são múltiplos de X e os exibe na tela*/
#include <stdio.h>

int main() {
    int matriz[5][5];
    int x;
    int multiplosDeX = 0;

    // Preencher a matriz com valores inteiros
    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite o elemento na linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Ler o valor de X
    printf("Digite um valor para X: ");
    scanf("%d", &x);

    // Contar quantos elementos na matriz são múltiplos de X
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] % x == 0) {
                multiplosDeX++;
            }
        }
    }

    // Imprimir os elementos múltiplos de X
    printf("Elementos múltiplos de %d na matriz:\n", x);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] % x == 0) {
                printf("%d (linha %d, coluna %d)\n", matriz[i][j], i + 1, j + 1);
            }
        }
    }

    // Mostrar a contagem
    printf("Total de elementos múltiplos de %d na matriz: %d\n", x, multiplosDeX);

    return 0;
}


/*Neste programa, o usuário insere os elementos da matriz 5x5 e, em seguida, o valor de X. O programa verifica quantos elementos na matriz são múltiplos de X e os imprime, juntamente com a contagem total. Certifique-se de compilar e executar o programa em um ambiente C compatível*/