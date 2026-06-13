
#include <stdio.h>

int main()
{
    float C, F;
    printf("\n Conversão de Farenheit para Celsius: \n");
    printf("\nFarenheit\tCelsius\n");
    F=32.0;
    do{
        C =(5.0/9.0)*(F - 32.0);
        printf("%.1f\t \t%.1f\n",F,C);
        F++;
    }while (F<=52.0);
    return 0;
}