#include <stdio.h>
#include <math.h>

int main()
{
    //declarações
    float a,b,c,delta, x1, x2;
    //entrada de dados
    printf("Digite o primeiro número: \n");
    scanf("%f", &a);
    printf("Digite o segundo número: \n");
    scanf("%f", &b);
    printf("Digite o terceiro número: \n");
    scanf("%f", &c);
    //processamento
    if(a==0)
    {
        printf("Não forma equação\n");
    }else{
        delta = (b*b) - (4*a*c);
        if (delta < 0)
        {
            printf("Não existe raiz real\n");
        
        }else{
            if (delta ==0)
            {
                x1 = (-b + sqrt(delta)) / (2*a);
                x2=x1;
                printf("X1= %f e X2 = %f\n", x1, x2);
            
            }else{
                x1 = (-b + sqrt(delta)) / (2*a);
                x2 = (-b - sqrt(delta)) / (2*a);
                printf("X1= %f e X2 = %f\n", x1, x2);
        }
    }
    }
}