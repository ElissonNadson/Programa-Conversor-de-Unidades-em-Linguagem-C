#include <stdio.h>
#include <stdlib.h>

void converterTempo() {
    system("cls");
    printf("*****************************************\n");
    printf("Selecionado Conversao de unidades de tempo\n");
    printf("*****************************************\n");
    int opcao;
    do {
        printf("Escolha uma opcao de conversao de unidades de tempo:\n");
        printf("1. Hora para Minuto e Segundo\n");
        printf("2. Minuto para Hora e Segundo\n");
        printf("3. Segundo para Hora e Minuto\n");
        printf("0. Sair e voltar para o menu principal\n");
        printf("------------------------------------------\n");
        printf("opcao: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida!\n");
            printf("------------------------------------------\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue;
        }
        
        float valor;
        if (opcao != 0){
            printf("*****************************************\n");
            switch(opcao) {
                case 1:
                    printf("Digite o valor em horas para ser convertido para minutos e segundos: \n");
                    break;
                case 2:
                    printf("Digite o valor em minutos para ser convertido para horas e segundos: \n");
                    break;
                case 3:
                    printf("Digite o valor em segundos para ser convertido para horas e minutos: \n");
                    break;
                default:
                    printf("Opcao invalida!\n");
                    printf("------------------------------------------\n");
                    continue;
            }
            if (scanf("%f", &valor) != 1) {
                printf("Entrada invalida. Certifique-se de inserir um numero.\n");
                printf("------------------------------------------\n");
                while (getchar() != '\n'); // Limpa o buffer de entrada
                continue;
            }
            printf("*****************************************\n");
        }

        switch(opcao) {            
            case 1:                
                printf("%.2f Hora(s) convertido para %.2f Minuto(s)\n", valor, valor * 60);
                printf("%.2f Hora(s) convertido para %.2f Segundo(s)\n", valor, valor * 3600);
                printf("------------------------------------------\n");
                break;
            case 2:
                printf("%.2f Minuto(s) convertido para %.2f Hora(s)\n", valor, valor / 60);
                printf("%.2f Minuto(s) convertido para %.2f Segundo(s)\n", valor, valor * 60);
                printf("------------------------------------------\n");
                break;
            case 3:
                printf("%.2f Segundo(s) convertido para %.2f Hora(s)\n", valor, valor / 3600);
                printf("%.2f Segundo(s) convertido para %.2f Minuto(s)\n", valor, valor / 60);
                printf("------------------------------------------\n");
                break;           
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n\n");
                printf("------------------------------------------\n");
        }
        if (opcao != 0) {
            printf("Deseja fazer mais uma conversao de unidades de tempo? \n (1 - Sim, 0 - Nao): ");
            if (scanf("%d", &opcao) != 1) {
                printf("Opcao invalida!\n");
                printf("------------------------------------------\n");
                while (getchar() != '\n'); // Limpa o buffer de entrada
                opcao = 0;
            }
            if (opcao == 1) {
                system("cls");
            } else {
                opcao = 0;
            }
        }
    } while(opcao != 0);
}