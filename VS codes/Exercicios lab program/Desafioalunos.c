#include <stdio.h>
#include <math.h>


int main()
{
    int alunos,cont;
    double nota1, nota2, nota3, media;

    printf("\nDigite a quantidade de alunos:\n");
    scanf("%d",&alunos);
    cont = 1;
    while((cont <= alunos) && (alunos <30))
    {
        printf("\nEscreva as tres notas\n");
        scanf("%lf%lf%lf ",&nota1,&nota2,&nota3);
        media = pow((nota1*nota2*nota3),0.33);
        printf("\nA media do aluno %d é: %.1lf\n",cont, media);
        cont = cont+1;
    }
    printf("\nFim\n");

    return 0;
}