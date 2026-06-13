#include <stdio.h>
#include <locale.h>

int main()
{
    //setlocale(LC_ALL,"Portuguese");
    int num,soma;
    printf("\nEste programa escreve os numeros pares de 1 a 100\n");
    for(num=0,soma=0; num<100; num=num+2)
    {
        printf("%d\t Numeros pares\n",num);
        soma=soma+num;
    }
    printf("A soma dos numeros pares de 1 a 100 eh: %d\n",soma);

    return 0;
}