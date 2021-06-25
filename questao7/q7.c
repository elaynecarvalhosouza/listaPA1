#include <stdio.h>

int main()
{
    int mat[4], *p, x;

    printf("%d\n", p = mat + 1); //é válida porque é um ponteiro recebendo um endereço de memória do mesmo tipo dele.
    printf("%d", p = mat++);     //Não é válido porque não é permitido o incremento de endereço de vetores.
    printf("%d", p = ++mat);     //Não é válido porque não é permitido o incremento de endereço de vetores.
    printf("%d", x = (*mat)++);  //é válida porque uma variável inteira x recebendo o valor que está na primeira posição do vetor "mat", e depois o mesmo é incrementado.
}