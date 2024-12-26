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
        printf("1. Metro quadrado (m-2) para Centimetro quadrado (cm-2)\n");
        printf("2. Centimetro quadrado (cm-2) para Metro quadrado (m-2)\n");
        printf("0. Sair e voltar para o menu principal\n");
        printf("------------------------------------------\n");
        printf("opcao: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida!\n");
            printf("------------------------------------------\n");
            while (getchar() != '\n'); 
            continue;
        }
        
        double valor;
        if (opcao != 0){
            printf("*****************************************\n");
            switch(opcao) {
                case 1:
                    printf("Digite o valor em metros quadrados (m-2) para ser convertido para centimetros quadrados (cm-2): \n");
                    break;
                case 2:
                    printf("Digite o valor em centimetros quadrados (cm-2) para ser convertido para metros quadrados (m-2): \n");
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
            }
            printf("*****************************************\n");
        }

        double valorConvertido;
        switch(opcao) {            
            case 1:                
                valorConvertido = valor * 10000;
                printf("%.2lf Metros quadrados (m-2) convertido para %.2lf Centimetros quadrados (cm-2)\n", valor, valorConvertido);
                printf("------------------------------------------\n");
                break;
            case 2:
                valorConvertido = valor / 10000;
                printf("%.2lf Centimetros quadrados (cm-2) convertido para %.2lf Metros quadrados (m-2)\n", valor, valorConvertido);
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
                while (getchar() != '\n');
            }
            if (opcao == 1) {
                system("cls");
            } else {
                opcao = 0;
            }
        }
    } while(opcao != 0);
}