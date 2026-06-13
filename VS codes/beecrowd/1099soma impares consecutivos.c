#include<stdio.h>
int main()
{
    int n,A,B,maior,menor,soma=0,cont=0,cont2;
    scanf("%d",&n);
    for(cont2=0;cont2<n;cont2++)
    {
            scanf("%d %d",&A,&B);
            if(A>B)
            {
                maior=A;
                menor=B;
            }else{
                maior=B;
                menor=A;
            }
            cont=menor+1;
            while(cont<maior)
            {
                if(cont%2!=0)
                {
                soma=soma+cont;
                }
                cont++;
            }
            printf("%d\n",soma);
            soma=0;
        }
    return 0;
}