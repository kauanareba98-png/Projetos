#include <stdio.h>

int main()
{
        int num1, num2, troca, cont=0;
        scanf("%d", &num1);
        scanf("%d", &num2);
        if (num1>0 && num2>0)
        {
        if (num1> num2)
        {
            troca = num2;
            num2 = num1;
            num1 = troca;
            
        }
        for (cont=num1+1;cont<num2;cont++)
        {
            if (cont%5==2 || cont%5==3)
            {
            printf("%d\n", cont);
            }
        }
    }
    return 0;
}