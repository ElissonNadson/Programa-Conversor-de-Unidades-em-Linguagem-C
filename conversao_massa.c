#include <stdio.h>

void converterMassa() {
    double valor;
    int unidadeOrigem, unidadeDestino;

    printf("=== Conversao de Massa ===\n");
    printf("Unidades disponiveis:\n");
    printf("1 - kg\n");
    printf("2 - g\n");
    printf("3 - t\n");
    
    printf("Digite o valor da massa: ");
    if (scanf("%lf", &valor) != 1) {
        printf("Entrada invalida. Certifique-se de inserir um numero.\n");
        return;
    }

    if (valor < 0) {
        printf("Valor invalido. A massa nao pode ser negativa.\n");
        return;
    }

    printf("Digite o numero da unidade de origem (1-kg, 2-g, 3-t): ");
    if (scanf("%d", &unidadeOrigem) != 1) {
        printf("Entrada invalida para unidade de origem.\n");
        return;
    }

    if (unidadeOrigem < 1 || unidadeOrigem > 3) {
        printf("Unidade de origem invalida.\n");
        return;
    }

    printf("Digite o numero da unidade de destino (1-kg, 2-g, 3-t): ");
    if (scanf("%d", &unidadeDestino) != 1) {
        printf("Entrada invalida para unidade de destino.\n");
        return;
    }

    if (unidadeDestino < 1 || unidadeDestino > 3) {
        printf("Unidade de destino invalida.\n");
        return;
    }
    double valorEmKg;

    switch (unidadeOrigem) {
        case 1:
            valorEmKg = valor;
            break;
        case 2:
            valorEmKg = valor / 1000.0;
            break;
        case 3:
            valorEmKg = valor * 1000.0;
            break;
        default:
            printf("Unidade de origem invalida.\n");
            return;
    }

    double valorConvertido;
    switch (unidadeDestino) {
        case 1:
            valorConvertido = valorEmKg;
            break;
        case 2:
            valorConvertido = valorEmKg * 1000.0;
            break;
        case 3:
            valorConvertido = valorEmKg / 1000.0;
            break;
        default:
            printf("Unidade de destino invalida.\n");
            return;
    }
    char *nomeUnidadeDestino;
    switch (unidadeDestino) {
        case 1: nomeUnidadeDestino = "kg"; break;
        case 2: nomeUnidadeDestino = "g";  break;
        case 3: nomeUnidadeDestino = "t";  break;
        default: nomeUnidadeDestino = "";   break;
    }

    printf("Resultado: %.6f %s\n", valorConvertido, nomeUnidadeDestino);
}