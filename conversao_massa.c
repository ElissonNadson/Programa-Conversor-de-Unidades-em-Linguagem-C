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
        printf("1. Quilograma para Grama\n");
        printf("2. Quilograma para Tonelada\n");
        printf("3. Grama para Quilograma\n");
        printf("4. Grama para Tonelada\n");
        printf("5. Tonelada para Quilograma\n");
        printf("6. Tonelada para Grama\n");        
        printf("0. Sair e voltar para o menu principal\n");
        printf("------------------------------------------\n");
        printf("opcao: ");
        scanf("%d", &opcao);
        
        double valor;
        if (opcao != 0){
            printf("*****************************************\n");
            switch(opcao) {
                case 1:
                    printf("Digite o valor em quilogramas para ser convertido para gramas: \n");
                    break;
                case 2:
                    printf("Digite o valor em quilogramas para ser convertido para toneladas: \n");
                    break;
                case 3:
                    printf("Digite o valor em gramas para ser convertido para quilogramas: \n");
                    break;
                case 4:
                    printf("Digite o valor em gramas para ser convertido para toneladas: \n");
                    break;
                case 5:
                    printf("Digite o valor em toneladas para ser convertido para quilogramas: \n");
                    break;
                case 6:
                    printf("Digite o valor em toneladas para ser convertido para gramas: \n");
                    break;
                default:
                    printf("Opcao invalida!\n");
                    printf("------------------------------------------\n");
                    continue;
            }
            scanf("%lf", &valor);
            printf("*****************************************\n");
        }

        double valorConvertido;
        switch(opcao) {            
            case 1:                
                valorConvertido = valor * 1000;
                printf("%.2lf Quilogramas convertido para %.2lf Gramas\n", valor, valorConvertido);
                printf("------------------------------------------\n");
                break;
            case 2:
                valorConvertido = valor / 1000;
                printf("%.2lf Quilogramas convertido para %.2lf Toneladas\n", valor, valorConvertido);
                printf("------------------------------------------\n");
                break;
            case 3:
                valorConvertido = valor / 1000;
                printf("%.2lf Gramas convertido para %.2lf Quilogramas\n", valor, valorConvertido);
                printf("------------------------------------------\n");
                break;
            case 4:
                valorConvertido = valor / 1000000;
                printf("%.2lf Gramas convertido para %.2lf Toneladas\n", valor, valorConvertido);
                printf("------------------------------------------\n");
                break;
            case 5:
                valorConvertido = valor * 1000;
                printf("%.2lf Toneladas convertido para %.2lf Quilogramas\n", valor, valorConvertido);
                printf("------------------------------------------\n");
                break;
            case 6:
                valorConvertido = valor * 1000000;
                printf("%.2lf Toneladas convertido para %.2lf Gramas\n", valor, valorConvertido);
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
            scanf("%d", &opcao);
            if (opcao == 1) {
                system("cls");
            } else {
                opcao = 0;
            }
        }
    } while(opcao != 0);
}