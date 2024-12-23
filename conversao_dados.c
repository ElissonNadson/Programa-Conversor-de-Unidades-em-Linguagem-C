// Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)
#include <stdio.h>

// Função para conversão de dados
double calcularConversarDados(double valor, int deUnidade, int paraUnidade) {
    double unidades[] = {1, 8, 8 * 1024, 8 * 1024 * 1024, 8 * 1024 * 1024 * 1024, 8 * 1024 * 1024 * 1024 * 1024};
    return valor * (unidades[deUnidade] / unidades[paraUnidade]);
}

void converterDados() {
    printf("Conversao de unidades de dados\n");
}
