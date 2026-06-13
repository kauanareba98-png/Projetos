#include <stdio.h>
int main()
{
    float n1, n2;
    char calc;

    printf("Digite numero 1 e 2:");
    scanf("%f %f", &n1, &n2);
    printf("Digite a operacao (+, -, *, /):");
    scanf(" %c", &calc);
    switch (calc)
    {   case '+':
            printf("%.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
            break;  
        case '/':
            if (n2 != 0)
            printf("%.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
        else
            printf("Erro: Divisao por zero nao e permitida.\n");
        break;
    default:
        printf("Operacao invalida.\n");
}
}