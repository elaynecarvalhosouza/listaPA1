#include <stdio.h>

void soma_vetor(int A[], int B[], int C[], int t)
{
    int i;

    for (i = 0; i < t; i++)
    {
        C[i] = A[i] + B[i];
    }
} //Função que fará a soma dos elementos dos vetores

int main()
{
    int tam, i;
    printf("informe o tamanho do vetor: \n");
    scanf("%d", &tam);

    int A[tam], B[tam], C[tam];

    printf("informe os elementos do vetor A: \n");
    for (i = 0; i < tam; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("informe os elementos do vetor B: \n");
    for (i = 0; i < tam; i++)
    {
        scanf("%d", &B[i]);
    }

    soma_vetor(A, B, C, tam); //chamando a função soma

    printf("os elementos do vetor C: \n");
    for (i = 0; i < tam; i++)
    {
        printf("%d ", C[i]); //Mostrando o resultado da soma dos vetores
    }

    return 0;
} //Fim código