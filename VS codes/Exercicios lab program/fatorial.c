#include <stdio.h>
int main()
{
    int A, fatorial, atual;
    printf("\nDigite o valor A entre 1 e 11\n");
    scanf("%d",&A);
    while (A<1 || A>11)
    {
      printf("\nDigite o valor A entre 1 e 11\n");
    scanf("%d",&A);  
    }
    fatorial = 1;
    atual = A;
    while (atual > 0)
    {
        fatorial = fatorial*atual;
        atual=atual-1;
    }
    printf("\nFatorial de %d = %d\n",A,fatorial);

    return 0;
}