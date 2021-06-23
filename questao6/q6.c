int main()
{
    int pulo[10];
    int *px, i;
    px = pulo;
    for (i=0; i<10; i++){
       //*(px+i) = i+1; //x[i] = i+1;
       px[i] = i+1; //maneira mais simples
    }

    printf("*px = %d \n ", *(pulo + 2));
   
    return 0;

}