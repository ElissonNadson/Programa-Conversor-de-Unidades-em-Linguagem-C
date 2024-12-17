#include <stdio.h>

void converterComprimento();
void converterMassa();
void converterVolume();
void converterTemperatura();
void converterVelocidade();
void converterPotencia();
void converterArea();
void converterTempo();
void converterDados();

int main() {
    int opcao;

    do {
        printf("Programa Conversor de Unidades\n");
        printf("Escolha uma opção:\n");
        printf("1. Unidades de comprimento\n");
        printf("2. Unidades de massa\n");
        printf("3. Unidades de volume\n");
        printf("4. Unidades de temperatura\n");
        printf("5. Unidades de velocidade\n");
        printf("6. Potência\n");
        printf("7. Unidades de área\n");
        printf("8. Unidades de tempo\n");
        printf("9. Unidades de dados\n");
        printf("0. Sair\n");
        printf("Opção: ");
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
                printf("Opção inválida!\n");
        }
    } while(opcao != 0);

    return 0;
}