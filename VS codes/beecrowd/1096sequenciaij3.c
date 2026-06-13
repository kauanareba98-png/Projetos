#include <stdio.h>
int main()
{
    int i=1,j=7,cont=0;
    while (i<10)
    {
    while (cont<3)
    {
        printf("I=%d J=%d\n",i,j);
        j-=1;
        cont++;
    }
    i+=2;
    j+=5;
    cont=0;
    }
    return 0;
}