#include <stdio.h>
int main()
{
    int a,cont;
    scanf("%d",&a);
    for(cont=1;cont<=10000;cont++)
    {
        if ((cont%a)==2)
        {
            printf("%d\n",cont);
        }
    }

    return 0;
}
