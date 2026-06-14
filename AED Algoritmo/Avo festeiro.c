#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    FILE *eventos;
    
    //declarando as variáveis
    int notas, escolha, letra, checagem,cont;
    float Valor;
    char nome[64], horas[7];
    
    // Variáveis adicionais para edição e exclusão
    int opcao_edicao, linha_alvo, contador;
    char novo_nome[50], novas_horas[7];
    float novo_valor;
    int nova_nota;
    FILE *temp; // Ponteiro para arquivo temporário
    char buffer[256]; // Buffer para ler linha por linha
    char limpa_buffer; // Para limpar o stdin corretamente

    //switch cadastro e lista
    do{
        system("clear");   //limpa a tela para não ficar poluído.
        do{
            printf("Escolha uma opção:\n1 - Cadastrar evento\n2 - Listar eventos\n3 - Editar eventos\n4 - Excluir eventos\n5 - Sair\n");
            scanf("%d", &escolha);
            
            // Correção portátil para fflush(stdin): limpar buffer manualmente
            while((limpa_buffer = getchar()) != '\n' && limpa_buffer != EOF); 

            if(escolha < 1 || escolha > 5)
                printf("Opção inválida! Tente novamente.\n");
        }while(escolha < 1 || escolha > 5);

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
                        printf("\nDigite o nome do local: ");
                        fgets(nome, 64, stdin);
                        // Remover newline do fgets se existir
                        nome[strcspn(nome, "\n")] = 0;
                        
                        printf("Digite o horario do evento: ");
                        fgets(horas, 7, stdin);
                        horas[strcspn(horas, "\n")] = 0;

                        printf("Digite o valor do evento: ");
                        scanf("%f", &Valor);
                        printf("Digite a nota do evento: ");
                        scanf("%d", &notas);
                        
                        // Limpar buffer após scanf numérico
                        while((limpa_buffer = getchar()) != '\n' && limpa_buffer != EOF);

                        // Ajuste no formato para salvar em uma única linha lógica para facilitar edição futura
                        fprintf(eventos, "%s | Horario: %s | Valor: R$ %.2f | Nota: %d\n------------------------\n", nome, horas, Valor, notas); 
                        fclose(eventos);          //fecha o arquivo txt
                        printf("\nDeseja cadastrar outro evento? (1 - Sim, 0 - Nao): ");
                        scanf("%d", &checagem);
                        while((limpa_buffer = getchar()) != '\n' && limpa_buffer != EOF);
                    }
                }while(checagem != 0);
                break;

            case 2:
                // Listar eventos
                eventos = fopen("eventos.txt", "r");                    //abre o arquivo txt
                if (eventos == NULL) {
                    printf("Nenhum evento cadastrado ainda.\n");
                } else {
                    while ((letra = fgetc(eventos)) != EOF) {               //le o arquivo txt, caracter por caracter,
                        printf("%c", letra);                                //EOF é um caracter invisivel que fica no final do txt
                    }                                                       //serve como marcador pro programa
                    fclose(eventos); //fecha o arquivo txt
                }
                break;

            case 3:
                // Editar eventos
                printf("--- Editar Evento ---\n");
                eventos = fopen("eventos.txt", "r");
                if (eventos == NULL) {
                    printf("Arquivo vazio ou não encontrado.\n");
                } else {
                    // Primeiro, mostrar a lista com numeração
                    contador = 0;
                    while (fgets(buffer, sizeof(buffer), eventos) != NULL) {
                        // Imprime apenas linhas que parecem ser início de registro (contêm "|")
                        if (strstr(buffer, "|") != NULL) {
                            contador++;
                            printf("[%d] %s", contador, buffer);
                        }
                    }
                    fclose(eventos);

                    if (contador == 0) {
                        printf("Nenhum evento encontrado para editar.\n");
                    } else {
                        printf("\nQual número do evento deseja editar? (1-%d): ", contador);
                        scanf("%d", &linha_alvo);
                        while((limpa_buffer = getchar()) != '\n' && limpa_buffer != EOF);

                        if (linha_alvo < 1 || linha_alvo > contador) {
                            printf("Número inválido.\n");
                        } else {
                            // Pedir novos dados
                            printf("Digite o NOVO nome do local: ");
                            fgets(novo_nome, 50, stdin);
                            novo_nome[strcspn(novo_nome, "\n")] = 0;
                            printf("Digite o NOVO horario: ");
                            fgets(novas_horas, 7, stdin);
                            novas_horas[strcspn(novas_horas, "\n")] = 0;
                            printf("Digite o NOVO valor: ");
                            scanf("%f", &novo_valor);
                            printf("Digite a NOVA nota: ");
                            scanf("%d", &nova_nota);
                            while((limpa_buffer = getchar()) != '\n' && limpa_buffer != EOF);

                            // Processo de edição usando arquivo temporário
                            eventos = fopen("eventos.txt", "r");
                            temp = fopen("temp.txt", "w");
                            
                            if (eventos == NULL || temp == NULL) {
                                printf("Erro ao criar arquivo temporário.\n");
                                return 1;
                            }

                            contador = 0;
                            // Ler linha por linha
                            while (fgets(buffer, sizeof(buffer), eventos) != NULL) {
                                // Verifica se é uma linha de registro
                                if (strstr(buffer, "|") != NULL) {
                                    contador++;
                                    if (contador == linha_alvo) {
                                        // Escreve a linha editada no temp
                                        fprintf(temp, "%s | Horario: %s | Valor: R$ %.2f | Nota: %d\n------------------------\n", 
                                                novo_nome, novas_horas, novo_valor, nova_nota);
                                    } else {
                                        // Mantém a linha original
                                        fputs(buffer, temp);
                                    }
                                } else {
                                    // Mantém linhas separadoras ou outras
                                    fputs(buffer, temp);
                                }
                            }

                            fclose(eventos);
                            fclose(temp);

                            // Substitui o original pelo temp
                            remove("eventos.txt");
                            rename("temp.txt", "eventos.txt");
                            printf("Evento atualizado com sucesso!\n");
                        }
                    }
                }
                break;

            case 4:
                // Excluir eventos
                do{
                printf("--- Excluir Evento ---\n");
                eventos = fopen("eventos.txt", "r");
                if (eventos == NULL) {
                    printf("Arquivo vazio ou não encontrado.\n");
                } else {
                    // Mostrar lista numerada
                       contador = 0;
                    while (fgets(buffer, sizeof(buffer), eventos) != NULL) {
                        if (strstr(buffer, "|") != NULL) {
                            contador++;
                            printf("[%d] %s", contador, buffer);
                        }
                    }
                    fclose(eventos);

                    if (contador == 0) {
                        printf("Nenhum evento para excluir.\n");
                    } else {
                        printf("\nQual número do evento deseja EXCLUIR? (1-%d): ", contador);
                        scanf("%d", &linha_alvo);
                        while((limpa_buffer = getchar()) != '\n' && limpa_buffer != EOF);

                        if (linha_alvo < 1 || linha_alvo > contador) {
                            printf("Número inválido.\n");
                        } else {
                            // Processo de exclusão usando arquivo temporário
                            eventos = fopen("eventos.txt", "r");
                            temp = fopen("temp.txt", "w");

                            if (eventos == NULL || temp == NULL) {
                                printf("Erro ao criar arquivo temporário.\n");
                                return 1;
                            }

                            contador = 0;
                            while (fgets(buffer, sizeof(buffer), eventos) != NULL) {
                                if (strstr(buffer, "|") != NULL) {
                                    contador++;
                                    // Se for a linha alvo, NÃO escreve no temp (pula ela e o separador)
                                    if (contador == linha_alvo) {
                                        // Lê a próxima linha (separador) para pular também
                                        fgets(buffer, sizeof(buffer), eventos); 
                                        continue; 
                                    }
                                }
                                // Escreve tudo que não foi excluído
                                fputs(buffer, temp);
                            }

                            fclose(eventos);
                            fclose(temp);

                            remove("eventos.txt");
                            rename("temp.txt", "eventos.txt");
                            printf("Evento excluído com sucesso!\n");
                        }
                    }
                 printf("deseja exluir mais algum 1 para sim e 0 para não:");
                 scanf("%d",&cont);
                }
                }while(cont == 1);
            
                break;

            case 5:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }
        
        if (escolha != 5) {
            printf("Deseja voltar ao menu principal? (1 - Sim, 0 - Nao): ");
            scanf("%d", &escolha);
            while((limpa_buffer = getchar()) != '\n' && limpa_buffer != EOF);
        } else {
            escolha = 0; // Forçar saída se escolheu sair no menu
        }

    }while(escolha != 0);
    
    return 0;
}