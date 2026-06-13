#include<stdio.h>
int main()
{
    int A,B,maior,menor,soma=0,cont=0;
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
    return 0;
}