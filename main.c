#include <stdio.h>

// Unidades de comprimento (metro, centimetro, milimetro)
void converterComprimento();
// Unidades de massa (quilograma, grama, tonelada)
void converterMassa();
// Unidades de volume (litro, mililitro, metros cubicos)
void converterVolume();
// Unidades de temperatura (Celsius, Fahrenheit, Kelvin)
void converterTemperatura();
// Unidades de velocidade (km/h, m/s, mph)
void converterVelocidade();
// Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)
void converterPotencia();
// Unidades de area (metro quadrado, centimetro quadrado)
void converterArea();
// Unidades de tempo (segundos, minutos, horas)
void converterTempo();
// Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)
void converterDados();

int main() {
    int opcao;
    do {
        printf("Escolha uma opcao de conversao:\n");
        printf("1. Comprimento\n");
        printf("2. Massa\n");
        printf("3. Volume\n");
        printf("4. Temperatura\n");
        printf("5. Velocidade\n");
        printf("6. Potencia\n");
        printf("7. Area\n");
        printf("8. Tempo\n");
        printf("9. Dados\n");
        printf("0. Sair\n");
        printf("opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                converterComprimento();
                break;
            case 2:
                converterMassa();
                break;
            case 3:
                converterVolume();
                break;
            case 4:
                converterTemperatura();
                break;
            case 5:
                converterVelocidade();
                break;
            case 6:
                converterPotencia();
                break;
            case 7:
                converterArea();
                break;
            case 8:
                converterTempo();
                break;
            case 9:
                converterDados();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 0);

    return 0;
}