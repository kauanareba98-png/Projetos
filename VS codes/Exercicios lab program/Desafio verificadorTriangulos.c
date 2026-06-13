#include <stdio.h>
int main()
{
    int lado1,lado2,lado3,flag;
        
    flag =1;
    while (flag==1)
    {
        //entrada de dados
        printf("Digite o primeiro número: \n");
        scanf("%d", &lado1);
        printf("Digite o segundo número: \n");
        scanf("%d", &lado2);
        printf("Digite o terceiro número: \n");
        scanf("%d", &lado3);

        if((lado1 < (lado2 + lado3)) && (lado2 < (lado1 + lado3)) && (lado3 < (lado1 + lado2)))
        {
           //processamento
            if(lado1==lado2 && lado2==lado3)
            {
            printf("é um triangulo equilatero\n");
            }else{
                if((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3))
                {
                printf("é um triangulo isoceles\n");  
                }else{
                printf("é um triangulo escaleno\n");
                }
            }  
            
        }else{
        printf("\nNão é um triangulo\n");
       
    }
    printf("Deseja continuar? 1-Sim 2-Não\n");
    scanf("%d", &flag);

    }
    return 0;
}