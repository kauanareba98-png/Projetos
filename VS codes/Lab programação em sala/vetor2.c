#include <stdio.h>
int main()
{
    int ne;
    do{
        printf("Digite o numero de elementos do vetor(>1 e <11): ");
        scanf("%d", &ne);
    } while (ne <= 1 || ne >= 11);
    double V[ne];
    for(int i=0; i<ne; i++){
        printf("Digite os elementos do vetor: ");
        scanf("%lf", &V[i]);
    }
    printf("\nV = {");
    for(int i=0; i<ne; i++){
        printf("\t%lf",V[i]);
    }
    printf("\t}\n");

    return 0;
}