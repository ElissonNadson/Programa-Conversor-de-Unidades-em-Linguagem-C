#include <stdio.h>
#include <stdlib.h>
// Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)
// Função para conversão de dados
double calcularConversarDados(double valor, int deUnidade, int paraUnidade) {
    double unidades[] = {1.0, 8.0, 8.0 * 1024.0, 8.0 * 1024.0 * 1024.0, 8.0 * 1024.0 * 1024.0 * 1024.0, 8.0 * 1024.0 * 1024.0 * 1024.0 * 1024.0};
    return valor * (unidades[deUnidade] / unidades[paraUnidade]);
}

void converterDados() {
    int deUnidade, paraUnidade, retornar;
    double valor, resultado;

    do{
        system("cls");
        deUnidade = 0;
        paraUnidade = 0;
        resultado = 0;
        valor = 0;

        while (deUnidade < 1 || deUnidade > 6){      
            printf("Escolha a unidade de origem:\n");
            printf("1. Bits\n");
            printf("2. Bytes\n");
            printf("3. Kilobytes (KB)\n");
            printf("4. Megabytes (MB)\n");
            printf("5. Gigabytes (GB)\n");
            printf("6. Terabytes (TB)\n");
            printf("Digite o número correspondente à unidade de origem: ");
            scanf("%d", &deUnidade);
            if (deUnidade < 1 || deUnidade > 6){
                printf("A opção digitada é invalida. Digite novamente:\n");
            }
        }
        
        printf("Digite o valor: ");
        scanf("%lf", &valor);

        while (paraUnidade < 1 || paraUnidade > 6){   
            printf("Escolha a unidade de destino:\n");
            printf("1. Bits\n");
            printf("2. Bytes\n");
            printf("3. Kilobytes (KB)\n");
            printf("4. Megabytes (MB)\n");
            printf("5. Gigabytes (GB)\n");
            printf("6. Terabytes (TB)\n");
            printf("Digite o número correspondente à unidade de destino: ");
            scanf("%d", &paraUnidade);
        
            if (paraUnidade < 1 || paraUnidade > 6){
                printf("A opção digitada é invalida. Digite novamente:\n");
            }
        }
        // Convertendo as unidades
        resultado = calcularConversarDados(valor, deUnidade - 1, paraUnidade - 1);

        // Exibindo o resultado
        printf("Resultado: %.2lf\n", resultado);

        printf("Digite 0 se deseja voltar ao menu princial:");
        scanf("%d", &retornar);

    }while(retornar!=0);
    system("cls");
}