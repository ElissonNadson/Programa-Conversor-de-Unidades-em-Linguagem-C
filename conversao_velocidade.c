#include <stdio.h>
#include <stdlib.h>

double kmh_para_ms(double kmh); //Convertendo de km/h para m/s
double kmh_para_mph(double kmh); //Convertendo de km/h para mph
double ms_para_kmh(double ms); //Convertendo de m/s para km/h
double ms_para_mph(double ms); //Convertendo de m/s para mph
double mph_para_kmh(double mph); //Convertendo de mph para km/h
double mph_para_ms(double mph); //Convertendo de mph para m/s

// Unidades de velocidade (km/h, m/s, mph)
void converterVelocidade() {
    system("cls");
    printf("*****************************************\n");
    printf("Selecionado Conversao de unidades de velocidade\n");
    printf("*****************************************\n");
    int opcao;
    do {
        printf("Escolha uma opcao de conversao de unidades de velocidade:\n");
        printf("1. Quilometros por hora (km/h) para Metros por segundo (m/s)\n");
        printf("2. Quilometros por hora (km/h) para Milhas por hora (mph)\n");
        printf("3. Metros por segundo (m/s) para Quilometros por hora (km/h)\n");
        printf("4. Metros por segundo (m/s) para Milhas por hora (mph)\n");
        printf("5. Milhas por hora (mph) para Quilometros por hora (km/h)\n");
        printf("6. Milhas por hora (mph) para Metros por segundo (m/s)\n");        
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
                    printf("Digite o valor em Quilometros por hora (km/h) para ser convertido para Metros por segundo (m/s): \n");
                    break;
                case 2:
                    printf("Digite o valor em Quilometros por hora (km/h) para ser convertido para Milhas por hora (mph): \n");
                    break;
                case 3:
                    printf("Digite o valor em Metros por segundo (m/s) para ser convertido para Quilometros por hora (km/h): \n");
                    break;
                case 4:
                    printf("Digite o valor em Metros por segundo (m/s) para ser convertido para Milhas por hora (mph): \n");
                    break;
                case 5:
                    printf("Digite o valor em Milhas por hora (mph) para ser convertido para Quilometros por hora (km/h): \n");
                    break;
                case 6:
                    printf("Digite o valor em Milhas por hora (mph) para ser convertido para Metros por segundo (m/s): \n");
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

        switch(opcao) {            
            case 1:                
                printf("%.2lf Quilometros por hora (km/h) convertido para %.2lf Metros por segundo (m/s)\n", valor, kmh_para_ms(valor));
                printf("------------------------------------------\n");
                break;
            case 2:
                printf("%.2lf Quilometros por hora (km/h) convertido para %.2lf Milhas por hora (mph)\n", valor, kmh_para_mph(valor));
                printf("------------------------------------------\n");
                break;
            case 3:
                printf("%.2lf Metros por segundo (m/s) convertido para %.2lf Quilometros por hora (km/h)\n", valor, ms_para_kmh(valor));
                printf("------------------------------------------\n");
                break;
            case 4:
                printf("%.2lf Metros por segundo (m/s) convertido para %.2lf Milhas por hora (mph)\n", valor, ms_para_mph(valor));
                printf("------------------------------------------\n");
                break;
            case 5:
                printf("%.2lf Milhas por hora (mph) convertido para %.2lf Quilometros por hora (km/h)\n", valor, mph_para_kmh(valor));
                printf("------------------------------------------\n");
                break;
            case 6:
                printf("%.2lf Milhas por hora (mph) convertido para %.2lf Metros por segundo (m/s)\n", valor, mph_para_ms(valor));
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
            printf("Deseja fazer mais uma conversao de unidades de velocidade? \n (1 - Sim, 0 - Nao): ");
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

double kmh_para_ms(double kmh) {
    return kmh / 3.6;
}

double kmh_para_mph(double kmh) {
    return kmh / 1.609344;
}

double ms_para_kmh(double ms) {
    return ms * 3.6;
}

double ms_para_mph(double ms) {
    return ms * 2.236936;
}

double mph_para_kmh(double mph) {
    return mph * 1.609344;
}

double mph_para_ms(double mph) {
    return mph / 2.236936;
}