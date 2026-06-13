#include<stdio.h>
int main()
{
    int a1, ntermos, soma, atual, an, r;
    printf("\nDigite o primeiro termo:\n");
    scanf("%d",&a1);
    printf("\nDigite a razão\n");
    scanf("%d",&r);
    printf("\nDigite o numero de termos\n");
    scanf("%d",&ntermos);
    an = a1;
    atual = 1;
    soma = 0;
    printf("\nSeguem valores da Soma\n");
    while (atual <= ntermos)
    {
        soma = soma +an;
        printf("An=%d\n",an);
        printf("Soma = %d\n",soma);
        an = an+r;
        atual++;

    }

    return 0;
}