#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double L_para_ml(double L); //Convertendo de litro para mililitro
double L_para_m3(double ml); //Convertendo de litro para metro cúbico
double m3_para_ml(double m3); //Convertendo de metro cúbico para mililitro
double m3_para_L(double L); //Convertendo de metro cúbico para litro
double ml_para_L(double ml); //Convertendo de mililitro para litro
double ml_para_m3(double m3); //Convertendo de mililitro para metro cúbico

// Unidades de volume (L, ml, m3)
void converterVolume() {
    system("cls");
    printf("*****************************************\n");
    printf("Selecionado Conversao de unidades de volume\n");
    printf("*****************************************\n");
    int opcao;
    do {
        printf("Escolha uma opcao de conversao de unidades de volume:\n");
        printf("1. Litro (L) para Mililitro (ml)\n");
        printf("2. Litro (L) para Metro Cubico (m³)\n");
        printf("3. Metro Cubico (m³) para Mililitro (ml)\n");
        printf("4. Metro Cubico (m³) para Litro (L)\n");
        printf("5. Mililitro (ml) para Litro (L)\n");
        printf("6. Mililitro (ml) para Metro Cubico (m³)\n");        
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
                    printf("Digite o valor em litros (L) para ser convertido para mililitros (ml): \n");
                    break;
                case 2:
                    printf("Digite o valor em litros (L) para ser convertido para metros cubicos (m³): \n");
                    break;
                case 3:
                    printf("Digite o valor em metros cubicos (m³) para ser convertido para mililitros (ml): \n");
                    break;
                case 4:
                    printf("Digite o valor em metros cubicos (m³) para ser convertido para litros (L): \n");
                    break;
                case 5:
                    printf("Digite o valor em mililitros (ml) para ser convertido para litros (L): \n");
                    break;
                case 6:
                    printf("Digite o valor em mililitros (ml) para ser convertido para metros cubicos (m³): \n");
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

        switch(opcao) {            
            case 1:                
                printf("%.2lf Litros (L) convertido para %.2lf Mililitros (ml)\n", valor, L_para_ml(valor));
                printf("------------------------------------------\n");
                break;
            case 2:
                printf("%.2lf Litros (L) convertido para %.2lf Metros Cubicos (m³)\n", valor, L_para_m3(valor));
                printf("------------------------------------------\n");
                break;
            case 3:
                printf("%.2lf Metros Cubicos (m³) convertido para %.2lf Mililitros (ml)\n", valor, m3_para_ml(valor));
                printf("------------------------------------------\n");
                break;
            case 4:
                printf("%.2lf Metros Cubicos (m³) convertido para %.2lf Litros (L)\n", valor, m3_para_L(valor));
                printf("------------------------------------------\n");
                break;
            case 5:
                printf("%.2lf Mililitros (ml) convertido para %.2lf Litros (L)\n", valor, ml_para_L(valor));
                printf("------------------------------------------\n");
                break;
            case 6:
                printf("%.2lf Mililitros (ml) convertido para %.2lf Metros Cubicos (m³)\n", valor, ml_para_m3(valor));
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
            printf("Deseja fazer mais uma conversao de unidades de volume? \n (1 - Sim, 0 - Nao): ");
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

double L_para_ml(double L) {
    return L * 1000;
}

double L_para_m3(double L) {
    return L / 1000;
}

double m3_para_ml(double m3) {
    return m3 * 1000000;
}

double m3_para_L(double m3) {
    return m3 * 1000;
}

double ml_para_L(double ml) {
    return ml / 1000;
}

double ml_para_m3(double ml) {
    return ml / 1000000;
}