#include <stdio.h>
#include <math.h>
int main()
{   
    int cont=0;
    float i=0,j=1.0;
    while (i<2.1)
    {
        while (cont<3)
        {      
        printf("I=%g J=%g\n",i,j+i);  
        j+=1;
        cont++;
        }
    i+=0.2;
    j=1.0;
    cont=0;
    }
    return 0;
}