#include<stdio.h>
int main()
{
    int ini,cont;
    scanf("%d",&ini);
    for(cont=0;cont<6;ini++)
    { 
        if ((ini%2)!=0)
        {
            printf("%d\n",ini);
            cont++;
        }
    }
    return 0;
}