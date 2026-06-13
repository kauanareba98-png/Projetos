#include <stdio.h>
#include <math.h>

int main()
{
     //declarações
     int a,b,c;
     //entrada de dados
        printf("Digite o primeiro número: \n");
        scanf("%d", &a);
        printf("Digite o segundo número: \n");
        scanf("%d", &b);
        printf("Digite o terceiro número: \n");
        scanf("%d", &c);
        //processamento
        if(a==b && b==c)
        {
            printf("é um triangulo equilatero\n");
        }else{
                if((a == b) || (a == c) || (b == c))
                {
                      printf("é um triangulo isoceles\n");  
                }else{
                      printf("é um triangulo escaleno\n");
                }
        }
        


}