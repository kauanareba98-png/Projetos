#include <stdio.h>
int main()
{
    int nl ,nc;
    printf("Digite as dimensões da Matris A - ");
    printf("O numero de linhas e de colunas:\n");
    scanf("%d%d", &nl, &nc);
    double A[nl][nc];
    printf("Digite os elemento da matriz A: ");
    for(int i=0;i<nl;i++){
        for(int j = 0;j<nc;j++){
            scanf("%lf",&A[i][j]);
        }
    }
    double T[nc][nl];
    for(int i=0;i<nc;i++){
        for (int j = 0;j<nl;j++){
        T[i][j] = A[j][i];
    }
    }
    printf("A = \t");
    for(int i = 0; i<nl; i++){
        printf("\n\t");
        for (int j = 0; j<nc; j++){
        printf("%lf\t",A[i][j]);
    }
    }
    printf("\n");
    printf("T= \t");
    for (int i=0;i<nc;i++){
        printf("\n\t");
        for (int j =0; j<nl;j++){
        printf("%lf\t",T[i][j]);
        }
    }
    printf("\n");
    return 0;
}