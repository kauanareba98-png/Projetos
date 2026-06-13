#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    FILE *eventos;
    
    //declarando as variáveis
    int notas,escolha,letra,checagem;
    float Valor;
    char nome[50],horas[7];
    //switch cadastro e lista
    do{
    do{
        printf("Escolha uma opção:\n1 - Cadastrar evento\n2 - Listar eventos\n3 - Sair\n");
        scanf("%d", &escolha);
        fflush(stdin);
        if(escolha < 1 || escolha > 3)
            printf("Opção inválida! Tente novamente.\n");
    }while(escolha < 1 || escolha > 3);

    switch(escolha)
    {
        case 1:
        do{
            eventos = fopen("eventos.txt", "a");        //abre arquivo txt
            if(eventos == NULL){
			printf("Erro, nao foi possivel abrir o arquivo NOTAS\n");
	        fclose(eventos);
            }else{
	        eventos = fopen("eventos.txt", "a");
            printf("Digite o nome do local: ");
            fgets(nome, 64, stdin);
            fflush(stdin);
            printf("Digite o horario do evento: ");
            fgets(horas, 7, stdin);
            fflush(stdin);
            printf("Digite o valor do evento: ");
            scanf("%f", &Valor);
            fflush(stdin);
            printf("Digite a nota do evento: ");
            scanf("%d", &notas);
            fflush(stdin);
            fprintf(eventos, "\t%s | Horario: %s | Valor: R$ %.2f\n | Nota: %d\n------------------------\n", nome, horas, Valor, notas); //salva os dados no arquivo txt
            fclose(eventos);          //fecha o arquivo txt
            printf("Deseja cadastrar outro evento? (1 - Sim, 0 - Nao): ");
            scanf("%d", &checagem);
            fflush(stdin);
            }
        }while(checagem != 0);
        break;

        case 2:
            // Listar eventos
            eventos = fopen("eventos.txt", "r");                    //abre o arquivo txt
            while ((letra = fgetc(eventos)) != EOF) {               //le o arquivo txt, caracter por caracter,
                printf("%c", letra);                                //EOF é um caracter invisivel que fica no final do txt
            }                                                       //serve como marcador pro programa
                                                                    
            fclose(eventos); //fecha o arquivo txt
            break;
        case 3:
            // Sair
            break;
        default:
            printf("Opção inválida!\n");
    }
    printf("Deseja voltar ao menu principal? (1 - Sim, 0 - Nao): ");
    scanf("%d", &escolha);
    }while(escolha!=0);
    return 0;
}