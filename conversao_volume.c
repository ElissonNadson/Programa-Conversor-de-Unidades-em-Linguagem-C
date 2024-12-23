#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double L_para_ml(double L); //Convertendo de litro para minilitro
double L_para_m3(double ml); //Convertendo de minilitro para litro
double m3_para_ml(double m3); //Convertendo de metro cúbico para litro
double m3_para_L(double L); //Convertendo de litro para metro cúbico
double ml_para_L(double ml); //Convertendo de minilitro para metro cubico
double ml_para_m3(double m3); //Convertendo de metro cúbico para minilitro

// Unidades de volume (L, ml, m3)
void converterVolume() {
    printf("Conversao de unidades de volume\n");
    int opcao;

    do {
        printf("\nEscolha uma opcao de conversao (Digite o valor correspondente):\n");
        printf("    1. L para ml\n");
        printf("    2. L para m3\n");
        printf("    3. m3 para ml\n");
        printf("    4. m3 para L\n");
        printf("    5. ml para L\n");
        printf("    6. ml para m3\n");
        printf("    0. Sair\n");
        printf("opcao: ");
        scanf("%d", &opcao);

        double valor;
        switch(opcao) {
            case 1:
                printf("\nDigite o valor em L: ");
                scanf("%lf", &valor);
                printf("%.2lf L = %.2lf ml\n", valor, L_para_ml(valor));
                printf("Pressione Enter para continuar...");
                getchar(); 
                getchar();
                break;
            case 2:
                printf("\nDigite o valor em L: ");
                scanf("%lf", &valor);
                printf("%.2lf L = %.2lf m3\n", valor, L_para_m3(valor));
                printf("Pressione Enter para continuar...");
                getchar();
                getchar();
                break;
            case 3:
                printf("\nDigite o valor em m3: ");
                scanf("%lf", &valor);
                printf("%.2lf m3 = %.2lf ml\n", valor, m3_para_ml(valor));
                printf("Pressione Enter para continuar...");
                getchar(); 
                getchar();
                break;
            case 4:
                printf("\nDigite o valor em m3: ");
                scanf("%lf", &valor);
                printf("%.2lf m3 = %.2lf L\n", valor, m3_para_L(valor));
                printf("Pressione Enter para continuar...");
                getchar(); 
                getchar();
                break;
            case 5:
                printf("\nDigite o valor em ml: ");
                scanf("%lf", &valor);
                printf("%.2lf ml = %.2lf L\n", valor, ml_para_L(valor));
                printf("Pressione Enter para continuar...");
                getchar(); 
                getchar();
                break;
            case 6:
                printf("\nDigite o valor em ml: ");
                scanf("%lf", &valor);
                printf("%.2lf ml = %.2lf m3\n", valor, ml_para_m3(valor));
                printf("Pressione Enter para continuar...");
                getchar(); 
                getchar();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 0);
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
    return ml /1000;
}

double ml_para_m3(double ml) {
    return ml / 1000000;
}