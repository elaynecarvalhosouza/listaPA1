#include <stdio.h>

int main()
{
    int mat[4], *p, x;

    printf("%d\n",p = mat + 1);
    //printf("%d",p = mat++);
    //printf("%d",p = ++mat);
    printf("%d",x = (*mat)++);
}