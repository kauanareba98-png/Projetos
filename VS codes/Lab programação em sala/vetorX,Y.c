#include <stdio.h>
int main()
{
    int x[10], y[10];
    
    printf("Digite os valores do vetor X: \n");
    for(int v1=0;v1<10;v1++)
    {
        
        scanf("%d",&x[v1]);
    }
    for(int v1=0;v1<10;v1++)
    {
        y[9-v1]=x[v1];
    }
    for(int v1=0;v1<10;v1++)
    {
        printf("%d\t",y[v1]);
    }
    return 0;
}