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

        while (deUnidade < 1 || deUnidade > 6) {      
            printf("Escolha a unidade de origem:\n");
            printf("1. Bits\n");
            printf("2. Bytes\n");
            printf("3. Kilobytes (KB)\n");
            printf("4. Megabytes (MB)\n");
            printf("5. Gigabytes (GB)\n");
            printf("6. Terabytes (TB)\n");
            printf("Digite o numero correspondente a unidade de origem: ");
            if (scanf("%d", &deUnidade) != 1) {
                printf("Opcao invalida!\n");
                while (getchar() != '\n'); // Limpa o buffer de entrada
                continue;
            }
            if (deUnidade < 1 || deUnidade > 6) {
                printf("A opcao digitada e invalida. Digite novamente:\n");
            }
        }
        
        printf("Digite o valor: ");
        if (scanf("%lf", &valor) != 1) {
            printf("Entrada invalida. Certifique-se de inserir um numero.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
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
                while (getchar() != '\n'); // Limpa o buffer de entrada
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

        printf("Digite 0 se deseja voltar ao menu principal: ");
        if (scanf("%d", &retornar) != 1) {
            printf("Opcao invalida!\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            retornar = 0;
        }
    } while (retornar != 0);
    system("cls");
}