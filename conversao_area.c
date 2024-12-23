#include <stdio.h>

void converterArea() {
    double valor;
    int unidadeOrigem, unidadeDestino;

    //escolher a unidade de origem
    printf("Digite o numero da unidade de origem (1-metro quadrado, 2-centimetro quadrado): ");
    if (scanf("%d", &unidadeOrigem) != 1) {
        printf("Entrada invalida para unidade de origem.\n");
        return;
    }

    if (unidadeOrigem < 1 || unidadeOrigem > 2) {
        printf("Unidade de origem invalida.\n");
        return;
    }

    //digitar o valor
    printf("Digite o valor da area: ");
    if (scanf("%lf", &valor) != 1) {
        printf("Entrada invalida. Certifique-se de inserir um numero.\n");
        return;
    }

    if (valor < 0) {
        printf("Valor invalido. A area nao pode ser negativa.\n");
        return;
    }

    //escolher a unidade de destino
    printf("Digite o numero da unidade de destino (1-metro quadrado, 2-centimetro quadrado): ");
    if (scanf("%d", &unidadeDestino) != 1) {
        printf("Entrada invalida para unidade de destino.\n");
        return;
    }

    if (unidadeDestino < 1 || unidadeDestino > 2) {
        printf("Unidade de destino invalida.\n");
        return;
    }

    //converte a unidade de origem para metros quadrados
    double valorEmMetrosQuadrados;
    switch (unidadeOrigem) {
        case 1:
            valorEmMetrosQuadrados = valor;
            break;
        case 2:
            valorEmMetrosQuadrados = valor / 10000.0;
            break;
        default:
            return;
    }

    //converte de metros quadrados para unidade de destino
    double valorConvertido;
    switch (unidadeDestino) {
        case 1:
            valorConvertido = valorEmMetrosQuadrados;
            break;
        case 2:
            valorConvertido = valorEmMetrosQuadrados * 10000.0;
            break;
        default:
            return;
    }

    char *unidade;
    switch (unidadeDestino) {
        case 1: unidade = "metro quadrado"; break;
        case 2: unidade = "centimetro quadrado";  break;
        default: unidade = "";   break;
    }

    //resultado em 3 casas decimais
    printf("Resultado: %.3f %s\n", valorConvertido, unidade);

    printf("Pressione ENTER para voltar ao menu principal...");
    getchar();
    getchar();
}