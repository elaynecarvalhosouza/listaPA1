int main()
{
    int pulo[10];
    int *px, i;
    px = pulo;
    for (i = 0; i < 10; i++)
    {
        px[i] = i + 1;
    }
    printf("*px = %d \n ", *(pulo + 2));
    //A expressão *(pulo + 2); referencia o valor do terceiro elemento do vetor.
    return 0;

} //Fim código