#include <stdio.h>

int main()
{
    //variaveis
        float h,pesoideal;
        char sexo;
    //entradas
        printf("Escreva altura\n");
        scanf("%f",&h);
        printf("Escreva sexo(M)(F)\n");
        scanf(" %c",&sexo);
    //calculos
        if(sexo == 'm' || sexo == 'M')
        {
            pesoideal=(72.7*h)-58;
            printf("è do sexo masculino e seu peso ideal é:%.2f\n",pesoideal);
        }else{
            if(sexo == 'f' || sexo == 'F')
            {
            pesoideal=(62.1*h)-44.7;
            printf("è do sexo feminino e seu peso ideal é:%.2f\n",pesoideal);
            }else{
                printf("sexo invalido, digite M ou F\n");
            }

            }
    return 0;
}
