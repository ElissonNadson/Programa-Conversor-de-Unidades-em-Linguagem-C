#include <stdio.h>
#include <stdlib.h> 

void converterPotencia() {
    system("cls");
    printf("*****************************************\n");
    printf("Selecionado Conversao de unidades de potencia\n");
    printf("*****************************************\n");
    int opcao;
    do {
        printf("Escolha uma opcao de conversao de unidades de potencia:\n");
        printf("1. Watts (W) para Quilowatts (kW)\n");
        printf("2. Watts (W) para Cavalos-vapor (cv)\n");
        printf("3. Quilowatts (kW) para Watts (W)\n");
        printf("4. Quilowatts (kW) para Cavalos-vapor (cv)\n");
        printf("5. Cavalos-vapor (cv) para Watts (W)\n");
        printf("6. Cavalos-vapor (cv) para Quilowatts (kW)\n");
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
                    printf("Digite o valor em Watts (W) para ser convertido para Quilowatts (kW): \n");
                    break;
                case 2:
                    printf("Digite o valor em Watts (W) para ser convertido para Cavalos-vapor (cv): \n");
                    break;
                case 3:
                    printf("Digite o valor em Quilowatts (kW) para ser convertido para Watts (W): \n");
                    break;
                case 4:
                    printf("Digite o valor em Quilowatts (kW) para ser convertido para Cavalos-vapor (cv): \n");
                    break;
                case 5:
                    printf("Digite o valor em Cavalos-vapor (cv) para ser convertido para Watts (W): \n");
                    break;
                case 6:
                    printf("Digite o valor em Cavalos-vapor (cv) para ser convertido para Quilowatts (kW): \n");
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

        double resultado;
        switch(opcao) {            
            case 1:                
                resultado = valor / 1000; // W para kW
                printf("%.2lf Watts (W) convertido para %.2lf Quilowatts (kW)\n", valor, resultado);
                printf("------------------------------------------\n");
                break;
            case 2:
                resultado = valor / 735.5; // W para cv
                printf("%.2lf Watts (W) convertido para %.2lf Cavalos-vapor (cv)\n", valor, resultado);
                printf("------------------------------------------\n");
                break;
            case 3:
                resultado = valor * 1000; // kW para W
                printf("%.2lf Quilowatts (kW) convertido para %.2lf Watts (W)\n", valor, resultado);
                printf("------------------------------------------\n");
                break;
            case 4:
                resultado = valor * 1.35962; // kW para cv
                printf("%.2lf Quilowatts (kW) convertido para %.2lf Cavalos-vapor (cv)\n", valor, resultado);
                printf("------------------------------------------\n");
                break;
            case 5:
                resultado = valor * 735.5; // cv para W
                printf("%.2lf Cavalos-vapor (cv) convertido para %.2lf Watts (W)\n", valor, resultado);
                printf("------------------------------------------\n");
                break;
            case 6:
                resultado = valor / 1.35962; // cv para kW
                printf("%.2lf Cavalos-vapor (cv) convertido para %.2lf Quilowatts (kW)\n", valor, resultado);
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
            printf("Deseja fazer mais uma conversao de unidades de potencia? \n (1 - Sim, 0 - Nao): ");
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
