#include <stdio.h>

int main()
{
    int linA, colA, linB, colB;
    int i, j, k;
    double soma;

    printf("Dimensoes de A (linhas colunas): ");
    scanf("%d %d", &linA, &colA);

    printf("Dimensoes de B (linhas colunas): ");
    scanf("%d %d", &linB, &colB);

    if (colA != linB)
    {
        printf("Multiplicacao impossivel!\n");
        return 1;
    }

    double A[linA][colA], B[linB][colB], M[linA][colB];

    printf("Elementos de A:\n");
    for (i = 0; i < linA; i++)
        for (j = 0; j < colA; j++)
            scanf("%lf", &A[i][j]);

    printf("Elementos de B:\n");
    for (i = 0; i < linB; i++)
        for (j = 0; j < colB; j++)
            scanf("%lf", &B[i][j]);

    for (i = 0; i < linA; i++)
        for (j = 0; j < colB; j++)
        {
            soma = 0;
            for (k = 0; k < colA; k++)
                soma += A[i][k] * B[k][j];
            M[i][j] = soma;
        }

    printf("\nMatriz A:\n");
    for (i = 0; i < linA; i++)
    {
        for (j = 0; j < colA; j++)
            printf("%8.2f", A[i][j]);
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for (i = 0; i < linB; i++)
    {
        for (j = 0; j < colB; j++)
            printf("%8.2f", B[i][j]);
        printf("\n");
    }

    printf("\nMatriz M = A * B:\n");
    for (i = 0; i < linA; i++)
    {
        for (j = 0; j < colB; j++)
            printf("%8.2f", M[i][j]);
        printf("\n");
    }

    return 0;
}