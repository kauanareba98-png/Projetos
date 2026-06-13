#include<stdio.h>
int main()
{
    char cel[3][3];                                              //declaração variavel
    char j1='X', j2='O';
    int lin, col;
    char novojogo;

    do {
        for (int l=0; l<3; l++)                                  //colocar + na matriz e redefinir valor vazio
            for (int c=0; c<3; c++)
                cel[l][c] = '+';

        for (int cont=1; cont<10; cont++)                        //loop para definir fim de jogo
        {
            if ((cont%2)==0)
            {
                do {                                             //comandos jogador 2/checagem de celula vazia
                    printf("J2(O) digite as coordenadas\n");
                    scanf("%d %d", &lin, &col);
                    lin = lin-1;
                    col = col-1;
                    if (cel[lin][col] != '+')
                        printf("Celula ja ocupada\n");
                } while (cel[lin][col] != '+');
                cel[lin][col] = j2;
            } else {
                do {                                             //comandos jogador 1/checagem de celula vazia
                    printf("J1(X) digite as coordenadas\n");
                    scanf("%d %d", &lin, &col);
                    lin = lin-1;
                    col = col-1;
                    if (cel[lin][col] != '+')
                        printf("Celula ja ocupada\n");
                } while (cel[lin][col] != '+');
                cel[lin][col] = j1;
            }

            for (int l=0; l<3; l++)                              //printar as matrizes
            {
                for (int c=0; c<3; c++)
                {
                    if (c==2)
                        printf("%c", cel[l][c]);
                    else
                        printf("%c|", cel[l][c]);
                }
                printf("\n");
            }

            char atual = (cont % 2 == 0) ? j2 : j1;
            int venceu = 0;

            for (int l=0; l<3; l++)                              //checar linhas
                if (cel[l][0]==atual && cel[l][1]==atual && cel[l][2]==atual)
                    venceu = 1;

            for (int c=0; c<3; c++)                              //checar colunas
                if (cel[0][c]==atual && cel[1][c]==atual && cel[2][c]==atual)
                    venceu = 1;

            if (cel[0][0]==atual && cel[1][1]==atual && cel[2][2]==atual)  //diagonal principal
                venceu = 1;
            if (cel[0][2]==atual && cel[1][1]==atual && cel[2][0]==atual)  //diagonal secundária
                venceu = 1;

            if (venceu)
            {
                printf("Jogador %d (%c) venceu!\n", (atual==j1) ? 1 : 2, atual);
                break;                                           //sai do for e vai para a pergunta de novojogo
            }

            if (cont == 9)                                       //empate: todos os 9 turnos usados sem vencedor
                printf("Fim de jogo, empate\n");
        }

        printf("Deseja jogar novamente? (Y/N)\n");
        scanf(" %c", &novojogo);                                 //espaço antes de %c para ignorar o Enter no buffer

    } while (novojogo == 'Y' || novojogo == 'y');                //repete enquanto jogador quiser

    printf("Obrigado por jogar!\n");
    return 0;
}