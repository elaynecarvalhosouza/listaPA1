#include <stdio.h>

int main()
{

    char x[4];
    printf("endereço inicial x= %d \n", x);
    printf("x = %d \n", x + 1); // somou +1 
    printf("x = %d \n", x + 2); // somou +2 
    printf("x = %d \n", x + 3); // somou +3 

    /*
    int x[4];
    printf("endereço inicial x= %d \n",x);
    printf("x = %d \n", x+1); // somou +4 
    printf("x = %d \n", x+2); // somou +8 
    printf("x = %d \n", x+3); // somou +12 
    */

    /*
    float x[4];
    printf("endereço inicial x= %d \n",x);
    printf("x = %d \n", x+1); // somou +4 
    printf("x = %d \n", x+2); // somou +8 
    printf("x = %d \n", x+3); // somou +12 
    */

    /*
    double x[4];
    printf("endereço inicial x= %d \n",x);
    printf("x = %d \n", x+1); // somou +8 
    printf("x = %d \n", x+2); // somou +16 
    printf("x = %d \n", x+3); // somou +24 
    */

    /*comparando com o que foi idealizado na questao 9 com os resultados obtidos nesta questão
    foi possível perceber que char continua ocupando 1 byte, o int agora ocupa 4 bytes e
    o float também é 4 bytes, porfim o double ocupa 8 bytes.
    */
    return 0;
}