#include <stdio.h>
 
int main() {
    
   int x[10];
   int valor;
   for (int count=0;count<10;count++)
   {
       scanf("%d",&valor);
       x[count]=valor;
       if (valor<1)
            x[count]=1;
   }
   for (int count=0;count<10;count++)
   {
   printf("X[%d] = %d\n",count,x[count]);
   }
    return 0;
}