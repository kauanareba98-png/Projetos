#include <stdio.h>

int main()
{
    int testes,num;
    long long N[61];
    N[0]=0;
    N[1]=1;
    scanf("%d",&testes);
    for (int i = 0;i<testes;i++)
    {
     scanf("%d",&num);   
    for(int cont = 2;cont<61;cont++)
    {
      N[cont]=(N[cont-1]+N[cont-2]);
    }
    printf("Fib(%d) = %lld",num,N[num]);
    }
    return 0;
}
