#include <stdio.h>
#include <stdlib.h>

int comparaCrescente(const void * a, const void * b){ //função de comparação
    if (*(int*)a == *(int*)b) // converte do tipo void para int, acessa o elemento e compara
            return 0;// os dois valores são iguais, nada muda
    else
        if (*(int*)a - *(int*)b < 0) // mesma coisa do 'if' anterior
            return -1; // se 'a' for menor que 'b', 'a' vem antes de 'b'
        else
            return 1; // se 'a' for maior que 'b', 'a' vem depois de 'b'
}

int main()
{
    int n;
    float *e;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    e = (float*)malloc(n*sizeof(float));

    for(int i = 0; i < n; i++){
        printf("Digite o elemento: ");
        scanf("%f", &e[i]);
    }

    printf("Sequencia ordenada: ");
    qsort(e, n, sizeof(float), comparaCrescente); // chamada da função de ordenação qsort
    /* utilizou como parametro o ponteiro om os valores da sequencia digitada, numero de elementos recebido na entrada, tamanho em bytes
     e a função de comparação*/
    for(int i=0; i<n; i++){
        printf("%f " "", e[i]);
    }

    free(e);
    return 0;
}