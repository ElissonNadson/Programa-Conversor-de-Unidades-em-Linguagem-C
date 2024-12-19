#include <stdio.h>
#include <stdlib.h>

// Unidades de comprimento (metro, centimetro, milimetro)
void converterComprimento() {
    printf("*****************************************\n");
    printf("Selecionado Conversao de unidades de comprimento\n");
    printf("*****************************************\n");
    int opcao;
    do {
        printf("Escolha uma opcao de conversao de unidades de comprimento:\n");
        printf("1. Metro para Centimetro\n");
        printf("2. Centimetro para metro\n");
        printf("3. Metro para Milimetro\n");
        printf("4. Milimetro para Metro\n");
        printf("5. Centimetro para Milimetro\n");
        printf("6. Milimetro para Centimetro\n");        
        printf("0. Sair e voltar para o menu principal\n");
        printf("opcao: ");
        scanf("%d", &opcao);
        
        double valor;
        if (opcao != 0){
            printf("*****************************************\n");
            printf("Informe o valor a ser convertido: \n");
            scanf("%lf", &valor);
            printf("*****************************************\n");
        }

        switch(opcao) {            
            case 1:                
                printf("%lf Metros convertido para %lf Centimetros\n", valor, valor * 100);
                printf("------------------------------------------\n");
                break;
            case 2:
                printf("%lf Centimetros convertido para %lf Metros\n", valor, valor / 100);
                printf("------------------------------------------\n");
                break;
            case 3:
                printf("%lf Metros convertido para %lf Milimetros\n", valor, valor * 1000);
                printf("------------------------------------------\n");
                break;
            case 4:
                printf("%lf Milimetros convertido para %lf Metros\n", valor, valor / 1000);
                printf("------------------------------------------\n");
                break;
            case 5:
                printf("%lf Centimetros convertido para %lf Milimetros\n", valor, valor * 10);
                printf("------------------------------------------\n");
                break;
            case 6:
                printf("%lf Milimetros convertido para %lf Centimetros\n", valor, valor / 10);
                printf("------------------------------------------\n");
                break;           
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 0);
}
