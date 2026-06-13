#include <stdio.h>
int main()
{
   float sal,imposto;
    scanf("%f", &sal);
    if (sal <= 2000)
    {
        printf("Isento\n");
    }else{ 
        if (sal > 2000.00 && sal <= 3000.00)
        {
            imposto = (sal - 2000.00) * 0.08;
            printf("R$ %.2f\n", imposto);
        }else{
            if (sal > 3000.00 && sal <= 4500.00)
        {
            imposto = (sal - 3000.00) * 0.18 + (1000.00 * 0.08);
            printf("R$ %.2f\n", imposto);
            }else{
                imposto = (sal - 4500.00) * 0.28 + (1500.00 * 0.18) + (1000.00 * 0.08);
                printf("R$ %.2f\n", imposto);
            }
            }
        }   

    return 0;
}