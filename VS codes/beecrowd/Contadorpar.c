#include <stdio.h>
int main()
{   
    int num,cont,pares=0,impar=0,posi=0,neg=0;
    for(cont=0;cont<5;cont++)
    {
        scanf ("%d\n",&num);
        if (num%2 ==0)
        {
            pares++;
        }else{
            impar++;
        }
        if (num>0)
        {
            posi++;
        }else if (num<0)
        {
            neg++;
        }
    }
    printf("%d valores pares\n",pares);
    printf("%d valores impares\n",impar);
    printf("%d valores positivos\n",posi);
    printf("%d valores negativos\n",neg);

    return 0;
}