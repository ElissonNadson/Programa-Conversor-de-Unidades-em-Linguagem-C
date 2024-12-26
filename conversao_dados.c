#include <stdio.h>
#include <stdlib.h>

// Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)
// Função para conversão de dados
double calcularConversarDados(double valor, int deUnidade, int paraUnidade) {
    double unidades[] = {1.0, 8.0, 8.0 * 1024.0, 8.0 * 1024.0 * 1024.0, 8.0 * 1024.0 * 1024.0 * 1024.0, 8.0 * 1024.0 * 1024.0 * 1024.0 * 1024.0};
    return valor * (unidades[deUnidade] / unidades[paraUnidade]);
}

void converterDados() {
    system("cls");
    printf("*****************************************\n");
    printf("Selecionado Conversao de unidades de dados\n");
    printf("*****************************************\n");
    int deUnidade, paraUnidade, retornar;
    double valor, resultado;

    do {
        deUnidade = 0;
        paraUnidade = 0;
        resultado = 0;
        valor = 0;

        while (deUnidade < 1 || deUnidade > 7) {      
            printf("Escolha a unidade de origem:\n");
            printf("1. Bits\n");
            printf("2. Bytes\n");
            printf("3. Kilobytes (KB)\n");
            printf("4. Megabytes (MB)\n");
            printf("5. Gigabytes (GB)\n");
            printf("6. Terabytes (TB)\n");
            printf("0. Voltar ao menu principal\n");
            printf("Digite o numero correspondente a unidade de origem: ");
            if (scanf("%d", &deUnidade) != 1) {
                printf("Opcao invalida!\n");
                while (getchar() != '\n'); 
                continue;
            }
            if (deUnidade == 0) {
                return;
            }
            if (deUnidade < 1 || deUnidade > 6) {
                printf("A opcao digitada e invalida. Digite novamente:\n");
            }
        }
        
        switch(deUnidade) {
            case 1:
                printf("Digite o valor em Bits: ");
                break;
            case 2:
                printf("Digite o valor em Bytes: ");
                break;
            case 3:
                printf("Digite o valor em Kilobytes (KB): ");
                break;
            case 4:
                printf("Digite o valor em Megabytes (MB): ");
                break;
            case 5:
                printf("Digite o valor em Gigabytes (GB): ");
                break;
            case 6:
                printf("Digite o valor em Terabytes (TB): ");
                break;
        }
        if (scanf("%lf", &valor) != 1) {
            printf("Entrada invalida. Certifique-se de inserir um numero.\n");
            while (getchar() != '\n'); 
            continue;
        }

        while (paraUnidade < 1 || paraUnidade > 6) {   
            printf("Escolha a unidade de destino:\n");
            printf("1. Bits\n");
            printf("2. Bytes\n");
            printf("3. Kilobytes (KB)\n");
            printf("4. Megabytes (MB)\n");
            printf("5. Gigabytes (GB)\n");
            printf("6. Terabytes (TB)\n");
            printf("Digite o numero correspondente a unidade de destino: ");
            if (scanf("%d", &paraUnidade) != 1) {
                printf("Opcao invalida!\n");
                while (getchar() != '\n'); 
                continue;
            }
            if (paraUnidade < 1 || paraUnidade > 6) {
                printf("A opcao digitada e invalida. Digite novamente:\n");
            }
        }

        // Convertendo as unidades
        resultado = calcularConversarDados(valor, deUnidade - 1, paraUnidade - 1);

        // Exibindo o resultado
        printf("Resultado: %.2lf\n", resultado);

        printf("Deseja fazer mais uma conversao de unidades de dados? \n (1 - Sim, 0 - Nao): ");
        if (scanf("%d", &retornar) != 1) {
            printf("Opcao invalida!\n");
            while (getchar() != '\n'); 
            retornar = 0;
        }
        if (retornar == 1) {
            system("cls");
        }
    } while (retornar != 0);
    system("cls");
}