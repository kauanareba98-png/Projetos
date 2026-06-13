#include <stdio.h>
int main()
{
    int num,maior,posi=0,cont;
    scanf("%d",&num);
    maior = num;
    for (cont=0;cont<10;cont++)
    {
        scanf("%d",&num);
        if (num>maior)
        {
            maior = num;
            posi = cont+1;
        }
    }
    printf("%d\n",maior);
    printf("%d\n",posi);
    return 0;
}