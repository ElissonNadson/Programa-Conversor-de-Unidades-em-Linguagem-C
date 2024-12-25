#include <stdio.h>
#include <stdlib.h>

void converterArea() {
    system("cls");
    printf("*****************************************\n");
    printf("Selecionado Conversao de unidades de area\n");
    printf("*****************************************\n");
    int opcao;
    do {
        printf("Escolha uma opcao de conversao de unidades de area:\n");
        printf("1. Metro quadrado (m²) para Centimetro quadrado (cm²)\n");
        printf("2. Centimetro quadrado (cm²) para Metro quadrado (m²)\n");
        printf("0. Sair e voltar para o menu principal\n");
        printf("------------------------------------------\n");
        printf("opcao: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida!\n");
            printf("------------------------------------------\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue;
        }
        
        double valor;
        if (opcao != 0){
            printf("*****************************************\n");
            switch(opcao) {
                case 1:
                    printf("Digite o valor em metros quadrados (m²) para ser convertido para centimetros quadrados (cm²): \n");
                    break;
                case 2:
                    printf("Digite o valor em centimetros quadrados (cm²) para ser convertido para metros quadrados (m²): \n");
                    break;
                default:
                    printf("Opcao invalida!\n");
                    printf("------------------------------------------\n");
                    continue;
            }
            if (scanf("%lf", &valor) != 1) {
                printf("Entrada invalida. Certifique-se de inserir um numero.\n");
                printf("------------------------------------------\n");
                while (getchar() != '\n'); // Limpa o buffer de entrada
                continue;
            }
            printf("*****************************************\n");
        }

        double valorConvertido;
        switch(opcao) {            
            case 1:                
                valorConvertido = valor * 10000;
                printf("%.2lf Metros quadrados (m²) convertido para %.2lf Centimetros quadrados (cm²)\n", valor, valorConvertido);
                printf("------------------------------------------\n");
                break;
            case 2:
                valorConvertido = valor / 10000;
                printf("%.2lf Centimetros quadrados (cm²) convertido para %.2lf Metros quadrados (m²)\n", valor, valorConvertido);
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
            printf("Deseja fazer mais uma conversao de unidades de area? \n (1 - Sim, 0 - Nao): ");
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