
/*Aqui está um exemplo de um programa em linguagem C que lê valores para um vetor de 10 elementos inteiros, pares e positivos, cria um segundo vetor conforme as especificações dadas e, em seguida, imprime os dois vetores:*/


#include <stdio.h>

    int
    main()
{
    int vetor1[10];
    int vetor2[10];

    // Ler valores para o vetor1
    for (int i = 0; i < 10; i++)
    {
        do
        {
            printf("Digite um valor inteiro, par e positivo para o elemento %d: ", i);
            scanf("%d", &vetor1[i]);
        } while (vetor1[i] % 2 != 0 || vetor1[i] <= 0);
    }

    // Criar o vetor2 com base nas regras dadas
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            vetor2[i] = vetor1[i] / 2;
        }
        else
        {
            vetor2[i] = vetor1[i] * 3;
        }
    }

    // Imprimir os dois vetores
    printf("Vetor 1: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor1[i]);
    }
    printf("\n");

    printf("Vetor 2: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    return 0;
}

/*Neste código, primeiro lemos os valores para o vetor1, garantindo que sejam inteiros, pares e positivos. Em seguida, criamos o vetor2 de acordo com as regras especificadas e, por fim, imprimimos os dois vetores na tela. Certifique-se de que o programa seja compilado e executado em um ambiente C compatível*/