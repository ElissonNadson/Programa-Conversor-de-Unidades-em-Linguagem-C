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
    printf("Conversao de unidades de velocidade\n");
    int opcao;

    do {
        printf("\nEscolha uma opcao de conversao (Digite o valor correspondente):\n");
        printf("    1. km/h para m/s\n");
        printf("    2. km/h para mph\n");
        printf("    3. m/s para km/h\n");
        printf("    4. m/s para mph\n");
        printf("    5. mph para km/h\n");
        printf("    6. mph para m/s\n");
        printf("    0. Sair\n");
        printf("opcao: ");
        scanf("%d", &opcao);

        double valor;
        switch(opcao) {
            case 1:
                printf("\nDigite o valor em km/h: ");
                scanf("%lf", &valor);
                printf("%.2lf km/h = %.2lf m/s\n", valor, kmh_para_ms(valor));
                printf("Pressione Enter para continuar...");
                getchar(); 
                getchar();
                break;
            case 2:
                printf("\nDigite o valor em km/h: ");
                scanf("%lf", &valor);
                printf("%.2lf km/h = %.2lf mph\n", valor, kmh_para_mph(valor));
                printf("Pressione Enter para continuar...");
                getchar();
                getchar();
                break;
            case 3:
                printf("\nDigite o valor em m/s: ");
                scanf("%lf", &valor);
                printf("%.2lf m/s = %.2lf km/h\n", valor, ms_para_kmh(valor));
                printf("Pressione Enter para continuar...");
                getchar(); 
                getchar();
                break;
            case 4:
                printf("\nDigite o valor em m/s: ");
                scanf("%lf", &valor);
                printf("%.2lf m/s = %.2lf mph\n", valor, ms_para_mph(valor));
                printf("Pressione Enter para continuar...");
                getchar(); 
                getchar();
                break;
            case 5:
                printf("\nDigite o valor em mph: ");
                scanf("%lf", &valor);
                printf("%.2lf mph = %.2lf km/h\n", valor, mph_para_kmh(valor));
                printf("Pressione Enter para continuar...");
                getchar(); 
                getchar();
                break;
            case 6:
                printf("\nDigite o valor em mph: ");
                scanf("%lf", &valor);
                printf("%.2lf mph = %.2lf m/s\n", valor, mph_para_ms(valor));
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