#include <stdio.h>
int main()
{
    char cel[3][3];                                              //declaração variavel
    char j1='X',j2='O';
    int lin,col;

    for (int l=0; l<3 ;l++)                                       //colocar + nas matrize e redefinir valor vazio
        {for (int c=0;c<3;c++)
            {
                cel[l][c] = '+';
            }
        }

    for (int cont=1;cont<10;cont++)                             //loop para definir fim de jogo
    {
       if ((cont%2)==0)
       {
        do{                                                       //comandos jogador 2/checagem de celula vazia
        printf ("J2 igite as coordenadas\n");
        scanf ("%d%d",&lin,&col);
        lin= lin-1;
        col= col-1;
        if(cel[lin][col]!='+')
        printf("celula já ocupada\n");
        }while(cel[lin][col]!='+');
        cel[lin][col]=j2;
        
       }else{                                                    //comandos jogador 1/checagem de celula vazia
        do{
        printf ("J1 digite as coordenadas\n");
        scanf ("%d%d",&lin,&col);
        lin= lin-1;
        col= col-1;
        if(cel[lin][col]!='+')
        printf("celula já ocupada\n");
        }while(cel[lin][col]!='+');
        cel[lin][col]=j1;
        
       }
       if(cel[lin][col]=='+')
       {printf("Celula já usada, digite outra\n");}                                       
        for (int l=0;l<3;l++)                                           //printar as matrizes
        {for (int c=0;c<3;c++)
            {
                if(c==2){
                printf("%c",cel[l][c]);
                }else{
                printf("%c|",cel[l][c]);
                }
            }
            printf("\n");
        }
    }
    printf("Fim de jogo, empate");
    return 0;
}