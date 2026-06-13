#include <stdio.h>
#include <math.h>

int main()
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
}