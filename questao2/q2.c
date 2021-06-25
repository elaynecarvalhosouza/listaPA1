#include <stdio.h>

int main(){
    int i=5, *p;
    p = &i;

    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
    /* Na minha máquina o resultado da impressão foi: 61fe1c 7 5 15 9.
    Onde 61fe1c é um número hexadecimal e convertendo para decimal é: 401377. Sendo assim
    a variável i não ocupa o endereço de memória 4094 e sim 401377.*/
    return 0;
}//Fim código