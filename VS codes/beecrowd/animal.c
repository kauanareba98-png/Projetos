#include <stdio.h>
#include <string.h>
int main()
{
   char carac1[15]; 
   char carac2[15];
   char carac3[15];

    scanf("%s %s %s", (char*)carac1, (char*)carac2, (char*)carac3);
    if (strcmp(carac1,"vertebrado")==0)
    {
        if (strcmp(carac2,"ave")==0)
        {
            if (strcmp(carac3,"carnivoro")==0)
            {
                printf("aguia\n");
            }else{
                printf("pomba\n");
            }
        }else{
            if (strcmp(carac2,"mamifero")==0)
            {
                if (strcmp(carac3,"onivoro")==0)
                {
                    printf("homem\n");
                }else{
                    printf("vaca\n");
                }
            }
        }
    }else{
        if (strcmp(carac1,"invertebrado")==0)
        {
            if (strcmp(carac2,"inseto")==0)
            {
                if (strcmp(carac3,"hematofago")==0)
                {
                    printf("pulga\n");
                }else{
                    printf("lagarta\n");
                }
            }else{
                if (strcmp(carac2,"anelideo")==0)
                {
                    if (strcmp(carac3,"hematofago")==0)
                    {
                        printf("sanguessuga\n");
                    }else{
                        printf("minhoca\n");
                    }
                }
            }
        }
    }
    return 0;
}