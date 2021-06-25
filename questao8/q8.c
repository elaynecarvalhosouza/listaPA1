#include <stdio.h>

int main()
{
    int vet[] = {4, 9, 13};
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%d ", *(vet + i));
    }
}//Imprime os endereços das posições do vetor vet.