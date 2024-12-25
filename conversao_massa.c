#include <stdio.h>
#include <stdlib.h>

void converterMassa() {
    system("cls");
    printf("*****************************************\n");
    printf("Selecionado Conversao de unidades de massa\n");
    printf("*****************************************\n");
    int opcao;
    do {
        printf("Escolha uma opcao de conversao de unidades de massa:\n");
        printf("1. Quilograma (kg) para Grama (g)\n");
        printf("2. Quilograma (kg) para Tonelada (t)\n");
        printf("3. Grama (g) para Quilograma (kg)\n");
        printf("4. Grama (g) para Tonelada (t)\n");
        printf("5. Tonelada (t) para Quilograma (kg)\n");
        printf("6. Tonelada (t) para Grama (g)\n");        
        printf("0. Sair e voltar para o menu principal\n");
        printf("------------------------------------------\n");
        printf("opcao: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida!\n");
            printf("------------------------------------------\n");
            while (getchar() != '\n'); 
        }
        
        double valor;
        if (opcao != 0){
            printf("*****************************************\n");
            switch(opcao) {
                case 1:
                    printf("Digite o valor em quilogramas (kg) para ser convertido para gramas (g): \n");
                    break;
                case 2:
                    printf("Digite o valor em quilogramas (kg) para ser convertido para toneladas (t): \n");
                    break;
                case 3:
                    printf("Digite o valor em gramas (g) para ser convertido para quilogramas (kg): \n");
                    break;
                case 4:
                    printf("Digite o valor em gramas (g) para ser convertido para toneladas (t): \n");
                    break;
                case 5:
                    printf("Digite o valor em toneladas (t) para ser convertido para quilogramas (kg): \n");
                    break;
                case 6:
                    printf("Digite o valor em toneladas (t) para ser convertido para gramas (g): \n");
                    break;
                default:
                    printf("Opcao invalida!\n");
                    printf("------------------------------------------\n");
                    continue;
            }
            if (scanf("%lf", &valor) != 1) {
                printf("Entrada invalida. Certifique-se de inserir um numero.\n");
                printf("------------------------------------------\n");
                while (getchar() != '\n'); 
                continue;
            }
            printf("*****************************************\n");
        }

        double valorConvertido;
        switch(opcao) {            
            case 1:                
                valorConvertido = valor * 1000;
                printf("%.2lf Quilogramas (kg) convertido para %.2lf Gramas (g)\n", valor, valorConvertido);
                printf("------------------------------------------\n");
                break;
            case 2:
                valorConvertido = valor / 1000;
                printf("%.2lf Quilogramas (kg) convertido para %.2lf Toneladas (t)\n", valor, valorConvertido);
                printf("------------------------------------------\n");
                break;
            case 3:
                valorConvertido = valor / 1000;
                printf("%.2lf Gramas (g) convertido para %.2lf Quilogramas (kg)\n", valor, valorConvertido);
                printf("------------------------------------------\n");
                break;
            case 4:
                valorConvertido = valor / 1000000;
                printf("%.2lf Gramas (g) convertido para %.2lf Toneladas (t)\n", valor, valorConvertido);
                printf("------------------------------------------\n");
                break;
            case 5:
                valorConvertido = valor * 1000;
                printf("%.2lf Toneladas (t) convertido para %.2lf Quilogramas (kg)\n", valor, valorConvertido);
                printf("------------------------------------------\n");
                break;
            case 6:
                valorConvertido = valor * 1000000;
                printf("%.2lf Toneladas (t) convertido para %.2lf Gramas (g)\n", valor, valorConvertido);
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
            printf("Deseja fazer mais uma conversao de unidades de massa? \n (1 - Sim, 0 - Nao): ");
            if (scanf("%d", &opcao) != 1) {
                printf("Opcao invalida!\n");
                printf("------------------------------------------\n");
                while (getchar() != '\n'); 
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