#include <stdio.h>
#include <string.h>

void converterMassa() {
    double valor;
    char unidadeOrigem[10], unidadeDestino[10];

    printf("=== Conversao de Massa ===\n");
    printf("Unidades disponiveis: kg, g, t\n");
    printf("Digite o valor da massa: ");
    if (scanf("%lf", &valor) != 1) {
        printf("Entrada invalida. Certifique-se de inserir um numero.\n");
        return;
    }

    if (valor < 0) {
        printf("Valor invalido. A massa nao pode ser negativa.\n");
        return;
    }

    printf("Digite a unidade de origem (kg/g/t): ");
    scanf("%s", unidadeOrigem);

    //unidade de origem
    if (strcmp(unidadeOrigem, "kg") != 0 && 
        strcmp(unidadeOrigem, "g") != 0 && 
        strcmp(unidadeOrigem, "t") != 0) {
        printf("Unidade de origem invalida.\n");
        return;
    }

    printf("Digite a unidade de destino (kg/g/t): ");
    scanf("%s", unidadeDestino);

    //unidade de destino
    if (strcmp(unidadeDestino, "kg") != 0 && 
        strcmp(unidadeDestino, "g") != 0 && 
        strcmp(unidadeDestino, "t") != 0) {
        printf("Unidade de destino invalida.\n");
        return;
    }

    //conversões:
    //1 kg = 1000 g
    //1 t = 1000 kg = 1.000.000 g
    double valorEmKg;

    //valor de origem para kg
    if (strcmp(unidadeOrigem, "kg") == 0) {
        valorEmKg = valor;
    } else if (strcmp(unidadeOrigem, "g") == 0) {
        valorEmKg = valor / 1000.0;
    } else { // unidadeOrigem == "t"
        valorEmKg = valor * 1000.0;
    }

    // Converte de kg para unidade destino
    double valorConvertido;
    if (strcmp(unidadeDestino, "kg") == 0) {
        valorConvertido = valorEmKg;
    } else if (strcmp(unidadeDestino, "g") == 0) {
        valorConvertido = valorEmKg * 1000.0;
    } else { // unidadeDestino == "t"
        valorConvertido = valorEmKg / 1000.0;
    }

    printf("Resultado: %.6f %s\n", valorConvertido, unidadeDestino);
}