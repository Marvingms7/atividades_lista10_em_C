/*Aqui está um programa em C que verifica se uma string é um palíndromo*/


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len, isPalindromo = 1;

    printf("Digite uma string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str[i] != str[j]) {
            isPalindromo = 0;
            break;
        }
    }

    if (isPalindromo) {
        printf("A string '%s' é um palíndromo.\n", str);
    } else {
        printf("A string '%s' não é um palíndromo.\n", str);
    }

    return 0;
}

/*Neste programa, o usuário é solicitado a inserir uma string. O programa então calcula o comprimento da string usando a função strlen da biblioteca string.h. Em seguida, ele verifica se a string é um palíndromo, comparando os caracteres da extremidade esquerda com os caracteres correspondentes da extremidade direita. Se encontrar um par de caracteres que não correspondam, a variável isPalindromo é definida como 0, indicando que a string não é um palíndromo. Caso contrário, a variável permanece como 1, indicando que a string é um palíndromo. Por fim, o programa informa ao usuário se a string é ou não um palíndromo. Certifique-se de compilar e executar o programa em um ambiente C compatível.*/

/*Formato sem a biblioteca*/

#include <stdio.h>

int main() {
    char str[100];
    int i, j, len = 0, isPalindromo = 1;

    printf("Digite uma string: ");
    scanf("%s", str);

    // Calcula o comprimento da string manualmente
    while (str[len] != '\0') {
        len++;
    }

    for (i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str[i] != str[j]) {
            isPalindromo = 0;
            break;
        }
    }

    if (isPalindromo) {
        printf("A string '%s' é um palíndromo.\n", str);
    } else {
        printf("A string '%s' não é um palíndromo.\n", str);
    }

    return 0;
}

