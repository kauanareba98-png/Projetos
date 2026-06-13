#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int idade;
    printf("\nDigite a idade(a partir de 0): \n");
    scanf("%d", &idade);
    while(idade>-1 && idade<110)
    {
        if(idade <18)
        {
            printf("\nMenor de idade\n");
        
        }else if((idade >=60) && (idade <110))
        {
            printf("\nIdoso\n");
        }else{
            printf("\nAdulto\n");
        }
        printf("\nSe deseja continuar digite a proxima idade\nSe deseja parar digite um valor menor que zero: \n");
        scanf("%d",&idade);
    }
    printf("\nEencerrando programa\n");

return 0;
}