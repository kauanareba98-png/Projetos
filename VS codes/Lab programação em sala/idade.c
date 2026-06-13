#include <stdio.h>

int main()
{
    int idade, media = 0, count = 0;
    
    do{
        printf("\nDigite a idade (Ou um valor negativo para sair): \n");
        scanf("%d",&idade);
        if(idade>=0 && idade <=100)
        {
            media += idade;
            count++;
        }
    }while (idade >=0);
    if(count >0)
    {
        printf("\nA idade media eh: %d\n",media/count);
    }else{
        printf("\n Nenhuma idade valida foi inserida\n");
    }
    return 0;
}