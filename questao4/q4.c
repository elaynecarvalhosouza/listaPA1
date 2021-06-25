#include <stdio.h>

int main() {
int valor;
int *p1;
float temp;
float *p2;
char aux;
char *nome = "Ponteiros";
char *p3;
int idade;
int vetor[3];
int *p4;
int *p5;
/* (a) */
valor = 10;
p1 = &valor;
*p1 = 20;
printf("%d \n", valor); //foi impresso o valor 20 e era o valor esperado.
/* (b) */
temp = 26.5;
p2 = &temp;
*p2 = 29.0;
printf("%.1f \n", temp); //a saída foi 29.0 e tambem era o valor esperado.
/* (c) */
p3 = &nome[0];
aux = *p3;
printf("%c \n", aux); //a saída foi o primeiro caractere da string, neste caso P. O valor era o esperado
/* (d) */
p3 = &nome[4];
aux = *p3;
printf("%c \n", aux); //impresso a letra 'e' que estava na posição no vetor. O valor era o esperado.
/* (e) */
p3 = nome;
printf("%c \n", *p3); //a letra P, valor esperado.
/* (f) */
p3 = p3 + 4;
printf("%c \n", *p3); //a letra e, valor esperado.
/* (g) */
p3--;
printf("%c \n", *p3); //a letra t, valor esperado.
/* (h) */
vetor[0] = 31;
vetor[1] = 45;
vetor[2] = 27;
p4 = vetor;
idade = *p4;
printf("%d \n", idade); //o valor 31, valor esperado.
/* (i) */
p5 = p4 + 1;
idade = *p5;
printf("%d \n", idade); //o valor 45, valor esperado.
/* (j) */
p4 = p5 + 1;
idade = *p4;
printf("%d \n", idade); //o valor 27, valor esperado.
/* (l) */
p4 = p4 - 2;
idade = *p4;
printf("%d \n", idade); //o valor 31, valor esperado.
/* (m) */
p5 = &vetor[2] - 1;
printf("%d \n", *p5); //o valor 45, valor esperado.
/* (n) */
p5++;
printf("%d \n", *p5); //o valor 27, valor esperado.
return(0);
}//Fim código