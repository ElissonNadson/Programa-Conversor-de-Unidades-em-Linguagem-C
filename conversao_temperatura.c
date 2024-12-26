#include <stdio.h>
#include <stdlib.h>

float CelsiusToFahrenheit(float Tcelsius);
float CelsiusToKelvin(float Tcelsius);

float FahrenheitToCelsius(float Tfahrenheit);
float FahrenheitToKelvin(float Tfahrenheit);

float KelvinToCelsius(float Tkelvin);
float KelvinToFahrenheit(float Tkelvin);

void converterTemperatura() {
    system("cls");
    printf("*****************************************\n");
    printf("Selecionado Conversao de unidades de temperatura\n");
    printf("*****************************************\n");
    int opcao;
    do {
        printf("Escolha uma opcao de conversao de unidades de temperatura:\n");
        printf("1. Celsius (C) para Fahrenheit (F)\n");
        printf("2. Celsius (C) para Kelvin (K)\n");
        printf("3. Fahrenheit (F) para Celsius (C)\n");
        printf("4. Fahrenheit (F) para Kelvin (K)\n");
        printf("5. Kelvin (K) para Celsius (C)\n");
        printf("6. Kelvin (K) para Fahrenheit (F)\n");
        printf("0. Sair e voltar para o menu principal\n");
        printf("------------------------------------------\n");
        printf("opcao: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida!\n");
            printf("------------------------------------------\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue;
        }
        
        float valor;
        if (opcao != 0){
            printf("*****************************************\n");
            switch(opcao) {
                case 1:
                    printf("Digite o valor em Celsius (C) para ser convertido para Fahrenheit (F): \n");
                    break;
                case 2:
                    printf("Digite o valor em Celsius (C) para ser convertido para Kelvin (K): \n");
                    break;
                case 3:
                    printf("Digite o valor em Fahrenheit (F) para ser convertido para Celsius (C): \n");
                    break;
                case 4:
                    printf("Digite o valor em Fahrenheit (F) para ser convertido para Kelvin (K): \n");
                    break;
                case 5:
                    printf("Digite o valor em Kelvin (K) para ser convertido para Celsius (C): \n");
                    break;
                case 6:
                    printf("Digite o valor em Kelvin (K) para ser convertido para Fahrenheit (F): \n");
                    break;
                default:
                    printf("Opcao invalida!\n");
                    printf("------------------------------------------\n");
                    continue;
            }
            if (scanf("%f", &valor) != 1) {
                printf("Entrada invalida. Certifique-se de inserir um numero.\n");
                printf("------------------------------------------\n");
                while (getchar() != '\n'); // Limpa o buffer de entrada
                continue;
            }
            printf("*****************************************\n");
        }

        switch(opcao) {            
            case 1:                
                printf("%.2f Celsius (C) convertido para %.2f Fahrenheit (F)\n", valor, CelsiusToFahrenheit(valor));
                printf("------------------------------------------\n");
                break;
            case 2:
                printf("%.2f Celsius (C) convertido para %.2f Kelvin (K)\n", valor, CelsiusToKelvin(valor));
                printf("------------------------------------------\n");
                break;
            case 3:
                printf("%.2f Fahrenheit (F) convertido para %.2f Celsius (C)\n", valor, FahrenheitToCelsius(valor));
                printf("------------------------------------------\n");
                break;
            case 4:
                printf("%.2f Fahrenheit (F) convertido para %.2f Kelvin (K)\n", valor, FahrenheitToKelvin(valor));
                printf("------------------------------------------\n");
                break;
            case 5:
                printf("%.2f Kelvin (K) convertido para %.2f Celsius (C)\n", valor, KelvinToCelsius(valor));
                printf("------------------------------------------\n");
                break;
            case 6:
                printf("%.2f Kelvin (K) convertido para %.2f Fahrenheit (F)\n", valor, KelvinToFahrenheit(valor));
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
            printf("Deseja fazer mais uma conversao de unidades de temperatura? \n (1 - Sim, 0 - Nao): ");
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
