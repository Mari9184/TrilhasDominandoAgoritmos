#include <stdio.h>
#include <string.h>
#define MAX_TAREFAS 100
#define TAM_DESCRICAO 100

int main() {
    char tarefas[MAX_TAREFAS][TAM_DESCRICAO];
    int concluidas[MAX_TAREFAS] = {0};
    int total_tarefas = 0;
    int opcao;

    do {
        printf("\nMenu de Opcoes\n");
        printf("1. Adicionar tarefa\n");
        printf("2. Listar tarefas\n");
        printf("3. Marcar concluida\n");
        printf("4. Exibir pendentes\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        
        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n');
            printf("Opcao invalida!\n");
            continue;
        }

        switch (opcao) {
            case 1:
                if (total_tarefas >= MAX_TAREFAS) {
                    printf("Limite de tarefas atingido!\n");
                } else {
                    printf("Descricao da tarefa: ");
                    scanf(" %[^\n]", tarefas[total_tarefas]); 
                    concluidas[total_tarefas] = 0;
                    total_tarefas++;
                    printf("Tarefa adicionada com sucesso!\n");
                }
                break;

            case 2:
                if (total_tarefas == 0) {
                    printf("Nenhuma tarefa cadastrada!\n");
                } else {
                    printf("\nLista de tarefas:\n");
                    for (int i = 0; i < total_tarefas; i++) {
                        printf("%d - [%c] %s\n", i + 1, concluidas[i] ? 'X' : ' ', tarefas[i]);
                    }
                }
                break;

            case 3:
                if (total_tarefas == 0) {
                    printf("Nenhuma tarefa cadastrada!\n");
                } else {
                    int num_tarefa;
                    printf("Numero da tarefa a marcar como concluida: ");
                    scanf("%d", &num_tarefa);

                    if (num_tarefa < 1 || num_tarefa > total_tarefas) {
                        printf("Tarefa invalida!\n");
                    } else {
                        concluidas[num_tarefa - 1] = 1;
                        printf("Tarefa %d marcada como concluida.\n", num_tarefa);
                    }
                }
                break;

            case 4:
                if (total_tarefas == 0) {
                    printf("Nenhuma tarefa cadastrada!\n");
                } else {
                    int existem_pendentes = 0;
                    printf("\nTarefas pendentes:\n");
                    for (int i = 0; i < total_tarefas; i++) {
                        if (!concluidas[i]) {
                            printf("%d - [ ] %s\n", i + 1, tarefas[i]);
                            existem_pendentes = 1;
                        }
                    }
                    if (!existem_pendentes) {
                        printf("Nenhuma tarefa pendente!\n");
                    }
                }
                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}