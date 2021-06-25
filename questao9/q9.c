#include <stdio.h>

int main()
{

    /* Sabendo que char ocupa 1 byte, int 2 bytes, float 4 byts, e double 8 bytes
    e que o endereço de memoria de x[0] é 4092 como falado na questão*/

    char x[4];
    printf("x = %d \n", x + 1); // a saída foi 4093
    printf("x = %d \n", x + 2); // a saída foi 4094
    printf("x = %d \n", x + 3); // a saída foi 4095

    int x[4];
    printf("x = %d \n", x + 1); // a saída foi 4094
    printf("x = %d \n", x + 2); // a saída foi 4096
    printf("x = %d \n", x + 3); // a saída foi 4098

    float x[4];
    printf("x = %d \n", x + 1); // a saída foi 4096
    printf("x = %d \n", x + 2); // a saída foi 4100
    printf("x = %d \n", x + 3); // a saída foi 4104

    double x[4];
    printf("x = %d \n", x + 1); // a saída foi 4100
    printf("x = %d \n", x + 2); // a saída foi 4108
    printf("x = %d \n", x + 3); // a saída foi 4116

    return 0;
}//Fim código