#include <stdio.h>

void converterTempo() {
    int opcao;
    float valor, resultado;

    while(1) {  // Loop para retornar ao menu após cada conversão
        printf("\nEscolha a conversao de Tempo:\n");
        printf("1 - Hora para Minuto e Segundo\n");
        printf("2 - Minuto para Hora, Segundo\n");
        printf("3 - Segundo para Hora, Minuto\n");
        printf("0 - Sair\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Saindo do programa...\n");
            break;  // Encerra o programa
        }

        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        switch (opcao) {
            case 1: // Hora para Minuto e Segundo
                printf("%.2f Hora(s) eh igual a %.2f Minuto(s)\n", valor, valor * 60);
                printf("%.2f Hora(s) eh igual a %.2f Segundo(s)\n", valor, valor * 3600);

                // Exibindo no formato de relógio
                int horas = (int)valor;  // Parte inteira
                int minutos = (int)((valor - horas) * 60);  // Parte fracionária convertida para minutos
                int segundos = (int)(((valor - horas) * 60 - minutos) * 60);  // Parte fracionária convertida para segundos
                printf("Formato Relogio: %02d:%02d:%02d\n", horas, minutos, segundos);
                break;

            case 2: // Minuto para Hora e Segundo
                printf("%.2f Minuto(s) eh igual a %.2f Hora(s)\n", valor, valor / 60);
                printf("%.2f Minuto(s) eh igual a %.2f Segundo(s)\n", valor, valor * 60);

                // Exibindo no formato de relógio
                horas = (int)(valor / 60);  // Parte inteira
                minutos = (int)valor % 60;  // Parte inteira
                segundos = (int)((valor - (int)valor) * 60);  // Parte fracionária convertida para segundos
                printf("Formato Relogio: %02d:%02d:%02d\n", horas, minutos, segundos);
                break;

            case 3: // Segundo para Hora e Minuto
                printf("%.2f Segundo(s) é igual a %.2f Hora(s)\n", valor, valor / 3600);
                printf("%.2f Segundo(s) é igual a %.2f Minuto(s)\n", valor, valor / 60);

                // Exibindo no formato de relógio
                horas = (int)(valor / 3600);  // Parte inteira
                minutos = (int)((valor - horas * 3600) / 60);  // Parte fracionária convertida para minutos
                segundos = (int)(valor - horas * 3600 - minutos * 60);  // Parte fracionária convertida para segundos
                printf("Formato Relogio: %02d:%02d:%02d\n", horas, minutos, segundos);
                break;

            default:
                printf("Opcao invalida!\n");
                break;
        }
    }

    return;
}