#include <stdio.h>
int main() 
{
    int A[15];
    int x, p, i;
    printf("14 elementos:\n");
        for (i = 0; i < 14; i++) 
        {
            printf("[%d]: ", i);
            scanf("%d", &A[i]);
        }
    printf("\nValor x: ");
    scanf("%d", &x);
    printf("Posicao p (0-13): ");
    scanf("%d", &p);
        for (i = 13; i >= p; i--) 
            A[i + 1] = A[i];
    A[p] = x;
    printf("\nVetor final:\n");
        for (i = 0; i < 15; i++) {
            printf("[%d] = %d\n", i, A[i]);
        }

    return 0;
}