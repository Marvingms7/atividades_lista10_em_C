/*Aqui está um programa em linguagem C que gera aleatoriamente 1000 números e, em seguida, permite ao usuário procurar um número no vetor e informa se o número está contido no vetor e em quais posições ele é encontrado:*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed para a geração de números aleatórios
    srand(time(NULL));

    // Criar um vetor de 1000 números aleatórios
    int vetor[1000];
    for (int i = 0; i < 1000; i++) {
        vetor[i] = rand() % 1000; // Números aleatórios entre 0 e 999
    }

    // Solicitar ao usuário para digitar um número
    int numero;
    printf("Digite um número para procurar no vetor: ");
    scanf("%d", &numero);

    // Verificar se o número está no vetor
    int encontrado = 0; // Usado para rastrear se o número foi encontrado
    printf("Posições onde o número %d foi encontrado: ", numero);
    for (int i = 0; i < 1000; i++) {
        if (vetor[i] == numero) {
            printf("%d ", i);
            encontrado ++ 1;
        }
    }

    if (encontrado != 0 ) {
        printf("\nO número %d foi encontrado no vetor.\n");
    } else {
        printf("\nO número %d não foi encontrado no vetor.\n");
    }

    return 0;
}

/*Neste programa, geramos aleatoriamente 1000 números e armazenamos no vetor. Em seguida, pedimos ao usuário que insira um número e verificamos se ele está no vetor. Se o número estiver no vetor, o programa mostrará as posições em que ele foi encontrado. Certifique-se de compilar e executar o programa em um ambiente C compatível.*/