#include <stdio.h>
int main()
{
    int a[15], s[15],x, j = 0;
    printf("Digite os valores do vetor a:");
    for(int cont = 0;cont<15;cont++)
    {
        scanf("%d",&a[cont]);
    }
    printf("Digite os valor x, a ser comparado:");
    scanf("%d",&x);
    for(int cont = 0;cont<15;cont++)
    {
       if (a[cont]>x)
       { 
        s[j]=a[cont];
        j++;
       }
        for(int cont = 0;cont<15;cont++){
        printf("%d",s[cont]);
    }
    }
    

    return 0;
}