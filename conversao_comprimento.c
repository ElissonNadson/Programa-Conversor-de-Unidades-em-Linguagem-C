#include <stdio.h>
#include <stdlib.h>

// Unidades de comprimento (metro, centimetro, milimetro)
void converterComprimento() {
    system("cls");
    printf("*****************************************\n");
    printf("Selecionado Conversao de unidades de comprimento\n");
    printf("*****************************************\n");
    int opcao;
    do {
        printf("Escolha uma opcao de conversao de unidades de comprimento:\n");
        printf("1. Metro (m) para Centimetro (cm)\n");
        printf("2. Metro (m) para Milimetro (mm)\n");
        printf("3. Centimetro (cm) para Metro (m)\n");
        printf("4. Centimetro (cm) para Milimetro (mm)\n");
        printf("5. Milimetro (mm) para Metro (m)\n");
        printf("6. Milimetro (mm) para Centimetro (cm)\n");        
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
                    printf("Digite o valor em metros (m) para ser convertido para centimetros (cm): \n");
                    break;
                case 2:
                    printf("Digite o valor em metros (m) para ser convertido para milimetros (mm): \n");
                    break;
                case 3:
                    printf("Digite o valor em centimetros (cm) para ser convertido para metros (m): \n");
                    break;
                case 4:
                    printf("Digite o valor em centimetros (cm) para ser convertido para milimetros (mm): \n");
                    break;
                case 5:
                    printf("Digite o valor em milimetros (mm) para ser convertido para metros (m): \n");
                    break;
                case 6:
                    printf("Digite o valor em milimetros (mm) para ser convertido para centimetros (cm): \n");
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
                printf("%.2lf Metros (m) convertido para %.2lf Centimetros (cm)\n", valor, valor * 100);
                printf("------------------------------------------\n");
                break;
            case 2:
                printf("%.2lf Metros (m) convertido para %.2lf Milimetros (mm)\n", valor, valor * 1000);
                printf("------------------------------------------\n");
                break;
            case 3:
                printf("%.2lf Centimetros (cm) convertido para %.2lf Metros (m)\n", valor, valor / 100);
                printf("------------------------------------------\n");
                break;
            case 4:
                printf("%.2lf Centimetros (cm) convertido para %.2lf Milimetros (mm)\n", valor, valor * 10);
                printf("------------------------------------------\n");
                break;
            case 5:
                printf("%.2lf Milimetros (mm) convertido para %.2lf Metros (m)\n", valor, valor / 1000);
                printf("------------------------------------------\n");
                break;
            case 6:
                printf("%.2lf Milimetros (mm) convertido para %.2lf Centimetros (cm)\n", valor, valor / 10);
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
            printf("Deseja fazer mais uma conversao de unidades de comprimento? \n (1 - Sim, 0 - Nao): ");
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
