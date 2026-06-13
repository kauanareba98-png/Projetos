#include <stdio.h>
int main()
{
    double A[5] = {0.0, 1.713, 2.5, 30.67,0.457};
    int B[2][4]= {{1,2,3,4},{2,2,2,2}};
    char strVet[4] = {'A','n','a','\0'};
    printf("\n A= {");
    for(int i=0; i<5; i++)    {
        printf("%.3lf ", A[i]);
    }
    printf("\t}\n");
    printf("\nstrVet = {\t");
    for(int i=0; i<4; i++) {
        printf("%c ", strVet[i]);
    }
    printf("\t}\n");
    printf("\nstrVet = %s\n", strVet);
    printf("\nB = {");
    for(int i=0; i<2; i++){
        if (i!=0) {printf("\n");}
        for(int j=0; j<4; j++) {
            printf("\t%d ", B[i][j]);
        }
    }
    printf("\t}\n");
    return 0;
}