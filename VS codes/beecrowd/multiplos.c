#include <stdio.h>
int main()
{
    int a, b, resto1, resto2;
    scanf("%d %d", &a, &b);
    resto1 = a % b;
    resto2 = b % a;
    if (resto1 == 0 || resto2 == 0)
    {
        printf("Sao Multiplos\n");

    }else{
        printf("Nao sao Multiplos\n");
    }
    return 0;
}