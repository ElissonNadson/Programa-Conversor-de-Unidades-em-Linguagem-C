#include <stdio.h>
#include <stdlib.h> 

void converterPotencia() {
    int opcao, continuar;
    double valor, resultado;

    do {
        system("cls"); 
        printf("\nBem-vindo ao conversor de unidades de potencia!\n");
        printf("Escolha a unidade de medida que voce quer converter:\n");
        printf("1. Watts (W)\n");
        printf("2. Quilowatts (kW)\n");
        printf("3. Cavalos-vapor (cv ou hp)\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        printf("Digite o valor a ser convertido: ");
        scanf("%lf", &valor);

        switch(opcao) {
            //***************************/
            case 1: // Watts (W)
                printf("Escolha a unidade de destino:\n");
                printf("1. Quilowatts (kW)\n");
                printf("2. Cavalos-vapor (cv ou hp)\n");
                printf("Opcao: ");
                scanf("%d", &opcao);
                if (opcao == 1) {
                    resultado = valor / 1000; // W para kW
                    printf("%.2lf W e igual a %.2lf kW\n", valor, resultado);
                } else if (opcao == 2) {
                    resultado = valor / 735.5; // W para cv
                    printf("%.2lf W e igual a %.2lf cv\n", valor, resultado);
                } else {
                    printf("Opcao invalida! Por favor, tente novamente.\n");
                }
                break;
            //***************************/
            case 2: // Quilowatts (kW)
                printf("Escolha a unidade de destino:\n");
                printf("1. Watts (W)\n");
                printf("2. Cavalos-vapor (cv ou hp)\n");
                printf("Opcao: ");
                scanf("%d", &opcao);
                if (opcao == 1) {
                    resultado = valor * 1000; // kW para W
                    printf("%.2lf kW e igual a %.2lf W\n", valor, resultado);
                } else if (opcao == 2) {
                    resultado = valor * 1.35962; // kW para cv
                    printf("%.2lf kW e igual a %.2lf cv\n", valor, resultado);
                } else {
                    printf("Opcao invalida! Por favor, tente novamente.\n");
                }
                break;
            //***************************/
            case 3: // Cavalos-vapor (cv ou hp)
                printf("Escolha a unidade de destino:\n");
                printf("1. Watts (W)\n");
                printf("2. Quilowatts (kW)\n");
                printf("Opcao: ");
                scanf("%d", &opcao);
                if (opcao == 1) {
                    resultado = valor * 735.5; // cv para W
                    printf("%.2lf cv e igual a %.2lf W\n", valor, resultado);
                } else if (opcao == 2) {
                    resultado = valor / 1.35962; // cv para kW
                    printf("%.2lf cv e igual a %.2lf kW\n", valor, resultado);
                } else {
                    printf("Opcao invalida! Por favor, tente novamente.\n");
                }
                break;
            //***************************/
            default:
                printf("Opcao invalida! Por favor, tente novamente.\n");
        }

        printf("Deseja converter outro valor? (1-Sim, 2-Voltar ao menu principal): ");
        scanf("%d", &continuar);
    } while (continuar == 1);
}
