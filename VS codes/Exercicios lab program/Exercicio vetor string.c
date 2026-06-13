#include <stdio.h>
int main()
{
    char nome[64];
    char endereco[128];
    int flag=1;
    do{
    printf("Digite o nome:\n");
    scanf(" %63[^\n]",nome);
    printf("Digite o endereço:\n");
    scanf(" %127[^\n]",endereco);
    printf("\n%s\n%s",nome,endereco);
    printf("Digite 1 para executar novamente\n");
    
    while(fgetc(stdin) != '\n');
    }while(flag==1);
    return 0;
}