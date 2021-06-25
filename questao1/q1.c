#include <stdio.h>

int main(){
    int i=3, j=5;
    int *p, *q;

    p = &i;
    q = &j;

    printf("A expressão 'p == &i' retorna o valor %d\n", (p== &i)); //retorna o valor 1.
    printf("A expressão '*p - *q' retorna o valor %d\n", (*p - *q)); //retorna o valor -2.
    printf("A expressão '**&p' retorna o valor %d\n", (**&p)); //retorna o valor 3.
    printf("A expressão '3 - *p/(*q) + 7' retorna o valor %d\n", (3 - *p/(*q) + 7)); //retorna o valor 10.

    return 0;
}//Fim código
