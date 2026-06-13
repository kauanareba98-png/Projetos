#include <stdio.h>
int main()
{
    char nome[10][32];
    int idade[10];
    float peso[10],alt[10];

    for (int cont=0; cont<2;cont++)
    {
        printf("Digite o nome:");
        scanf("%31[^\n]",nome[cont]);
        printf("Digite o idade:");
        scanf("%d",&idade[cont]);
        printf("Digite o peso:");
        scanf("%f",&peso[cont]);
        printf("Digite o altura:");
        scanf("%f",&alt[cont]);
        while (fgetc(stdin) != '\n');
    }
        printf("\n\n\tOs valores digitados são: \n\n");
        for(int cont=0;cont<2;cont++)
        {
            printf("%s\nIdade:%d\tPeso:%.2f\tAltura:%.2f\n",nome[cont],idade[cont],peso[cont],alt[cont]);
               
        }


    return 0;
}