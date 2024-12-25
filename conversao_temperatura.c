#include <stdio.h>
#include <stdlib.h>

float CelsiusToFahrenheit(float Tcelsius);
float CelsiusToKelvin(float Tcelsius);

float FahrenheitToCelsius(float Tfahrenheit);
float FahrenheitToKelvin(float Tfahrenheit);

float KelvinToCelsius(float Tkelvin);
float KelvinToFahrenheit(float Tkelvin);


void converterTemperatura() {
    int opc, subopc, opcContinuar;
    do {
        float temperatura;
        system("cls"); 
        printf("\nBem-vindo ao conversor de unidades de temperatura!\n");
        printf("Escolha a unidade de medida que voce quer converter:\n");
        printf("1. Celsius\n");
        printf("2. Farenheit\n");
        printf("3. Kelvin\n");
        printf("4. Voltar\n");
        printf("Opcao: ");
        scanf("%d", &opc);

        if (opc < 1 || opc > 4) {
            printf("Opcao invalida! Por favor, tente novamente.\n");
            continue;
        }

        if (opc != 4) {
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &temperatura);
            printf("Escolha a unidade de destino:\n");
            switch (opc) {
                case 1:
                    printf("1. Farenheit\n");
                    printf("2. Kelvin\n");
                    printf("Opcao: ");
                    scanf("%d", &subopc);
                    switch (subopc) {
                        case 1:
                            printf("%.1fTC e igual a %.1fTF\n", temperatura, CelsiusToFahrenheit(temperatura));
                            break;
                        case 2:
                            printf("%.1fTC e igual a %.1fTK\n", temperatura, CelsiusToKelvin(temperatura));
                            break;
                        default:
                            printf("Opcao invalida! Por favor, tente novamente.\n");
                            break;
                    }
                    break;
                case 2:
                    printf("1. Celsius\n");
                    printf("2. Kelvin\n");
                    printf("Opcao: ");
                    scanf("%d", &subopc);
                    switch (subopc) {
                        case 1:
                            printf("%.1fTF e igual a %.1fTC\n", temperatura, FahrenheitToCelsius(temperatura));
                            break;
                        case 2:
                            printf("%.1fTF e igual a %.1fTK\n", temperatura, FahrenheitToKelvin(temperatura));
                            break;
                        default:
                            printf("Opcao invalida! Por favor, tente novamente.\n");
                            break;
                    }
                    break;

                case 3:
                    printf("1. Celsius\n");
                    printf("2. Farenheit\n");
                    printf("Opcao: ");
                    scanf("%d", &subopc);
                    switch (subopc) {
                        case 1:
                            printf("%.1fTK e igual a %.1fTC\n", temperatura, KelvinToCelsius(temperatura));
                            break;
                        case 2:
                            printf("%.1fTK e igual a %.1fTF\n", temperatura, KelvinToFahrenheit(temperatura));
                            break;
                        default:
                            printf("Opcao invalida! Por favor, tente novamente.\n");
                            break;
                    }
                    break;
            }
        }

        if (opc != 4) {
            do {
                printf("Deseja converter outro valor? (1-Sim, 2-Voltar ao menu principal): ");
                scanf("%d", &opcContinuar);
                if (opcContinuar == 1)
                    break;
                else if (opcContinuar == 2)
                    opc = 4;
                else
                    printf("Opcao invalida! Por favor, tente novamente.\n");
            } while (opcContinuar != 1 && opcContinuar != 2);
        }
    } while (opc != 4);
}




// Funções auxiliares
float CelsiusToFahrenheit(float Tcelsius) {
    return ((9 / 5.0) * Tcelsius) + 32;
}

float CelsiusToKelvin(float Tcelsius) {
    return Tcelsius + 273.15;
}

float FahrenheitToCelsius(float Tfahrenheit) {
    return (Tfahrenheit - 32) * (5 / 9.0);
}

float FahrenheitToKelvin(float Tfahrenheit) {
    return CelsiusToKelvin(FahrenheitToCelsius(Tfahrenheit));
}

float KelvinToCelsius(float Tkelvin) {
    return Tkelvin - 273.15;
}

float KelvinToFahrenheit(float Tkelvin) {
    return CelsiusToFahrenheit(KelvinToCelsius(Tkelvin));
}
