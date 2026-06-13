#include <stdio.h>
#include <locale.h>

int main()
{
    //setlocale(LC_ALL,"Portuguese");
    int imp;
    printf("\nEste programa escreve os impares de 1 a 100\n");
    for(imp = 1; imp <100; imp= imp + 2)
    {
        printf("%d\t Numero\n",imp);
    }

    return 0;
}