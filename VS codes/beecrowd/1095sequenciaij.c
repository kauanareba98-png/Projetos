#include <stdio.h>
int main()
{
    int i=1,j=7;
    while (i<10)
    {
    while (j>4)
    {
        printf("I=%d J=%d\n",i,j);
        j-=1;
    }
    i+=2;
    j=7;
    }
    return 0;
}