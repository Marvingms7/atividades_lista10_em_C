/*Aqui está um programa em C que atende aos requisitos especificados para fornecer informações sobre os salários dos funcionários de uma empresa com três lojas, cada uma com 6 funcionários*/
#include <stdio.h>

int main() {
    float salarios[3][6]; // Matriz para armazenar os salários (3 lojas x 6 funcionários)

    // Preencher a matriz de salários por leitura do teclado
    for (int loja = 0; loja < 3; loja++) {
        for (int funcionario = 0; funcionario < 6; funcionario++) {
            printf("Digite o salário do funcionário %d da loja %d: ", funcionario + 1, loja + 1);
            scanf("%f", &salarios[loja][funcionario]);
        }
    }

    // Imprimir os salários de todos os funcionários com a identificação da loja
    printf("\nSalários dos funcionários em cada loja:\n");
    for (int loja = 0; loja < 3; loja++) {
        for (int funcionario = 0; funcionario < 6; funcionario++) {
            printf("Loja %d, Funcionário %d: R$ %.2f\n", loja + 1, funcionario + 1, salarios[loja][funcionario]);
        }
    }

    // Imprimir o total pago em salários por loja
    printf("\nTotal pago em salários por loja:\n");
    for (int loja = 0; loja < 3; loja++) {
        float totalSalarioLoja = 0;
        for (int funcionario = 0; funcionario < 6; funcionario++) {
            totalSalarioLoja += salarios[loja][funcionario];
        }
        printf("Loja %d: R$ %.2f\n", loja + 1, totalSalarioLoja);
    }

    // Informar quantos funcionários recebem salário superior a R$2.000,00 na primeira loja
    int funcionariosAcimaDe2000 = 0;
    for (int funcionario = 0; funcionario < 6; funcionario++) {
        if (salarios[0][funcionario] > 2000.0) {
            funcionariosAcimaDe2000++;
        }
    }
    printf("\nNa primeira loja, %d funcionário(s) recebe(m) salário acima de R$ 2.000,00.\n", funcionariosAcimaDe2000);

    // Calcular a média salarial da segunda loja
    float mediaSalarialSegundaLoja = 0;
    for (int funcionario = 0; funcionario < 6; funcionario++) {
        mediaSalarialSegundaLoja += salarios[1][funcionario];
    }
    mediaSalarialSegundaLoja /= 6;
    printf("\nA média salarial da segunda loja é: R$ %.2f\n", mediaSalarialSegundaLoja);

    return 0;
}

/*Neste programa, a matriz de salários é preenchida com base na entrada do usuário. Em seguida, ele imprime os salários de todos os funcionários, o total pago em salários por loja, informa quantos funcionários na primeira loja recebem salário acima de R$2.000,00 e calcula a média salarial da segunda loja. Certifique-se de compilar e executar o programa em um ambiente C compatível.*/
