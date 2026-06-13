#include <stdio.h>
#include <math.h>

int main()
{
    int opcao;
    printf("1_IMC\n");
    printf("2_Palindromo\n");
    printf("3_Eq.2° grau\n");
    printf("4_Fim\n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
    {
         //declarações
        float peso, altura, imc;
        //entrada de dados
        printf("Digite seu peso: \n");
         scanf(" %f",&peso);
        printf("Digite sua altura: \n");
         scanf("%f", &altura);
        //processamento
        imc = peso/pow(altura,2);
        //saída de dados
        printf("Seu IMC é: %.2f\n", imc);
        break;
    }
    case 2:
    {
        //declarações
        int lado1,lado2,lado3;
        //entrada de dados
        printf("Digite o primeiro número: \n");
        scanf("%d", &lado1);
        printf("Digite o segundo número: \n");
        scanf("%d", &lado2);
        printf("Digite o terceiro número: \n");
        scanf("%d", &lado3);
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
        break;
    }
    case 3:
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
        break;
    }
    case 4:
    {
        printf("Fim do programa\n");
        break;
    }
}
}