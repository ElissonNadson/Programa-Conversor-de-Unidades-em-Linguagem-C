#include <stdio.h>

float CelsiusToFahrenheit(float Tcelsius);
float CelsiusToKelvin(float Tcelsius);

float FahrenheitToCelsius(float Tfahrenheit);
float FahrenheitToKelvin(float Tfahrenheit);

float KelvinToCelsius(float Tkelvin);
float KelvinToFahrenheit(float Tkelvin);

typedef enum {
    Celsius,
    Fahrenheit,
    Kelvin
} Escala;

void converterTemperatura(Escala escalaEntrada, float temperatura, Escala escalaSaida) {
    printf("Resultado: ");
    switch (escalaEntrada) {
        case Celsius:
            if (escalaSaida == Fahrenheit)
                printf("%.1fTC = %.1fTF\n", temperatura, CelsiusToFahrenheit(temperatura));
            else
                printf("%.1fTC = %.1fTK\n", temperatura, CelsiusToKelvin(temperatura));
            break;

        case Fahrenheit:
            if (escalaSaida == Celsius)
                printf("%.1fTF = %.1fTC\n", temperatura, FahrenheitToCelsius(temperatura));
            else
                printf("%.1fTF = %.1fTK\n", temperatura, FahrenheitToKelvin(temperatura));
            break;

        case Kelvin:
            if (escalaSaida == Celsius)
                printf("%.1fTK = %.1fTC\n", temperatura, KelvinToCelsius(temperatura));
            else
                printf("%.1fTK = %.1fTF\n", temperatura, KelvinToFahrenheit(temperatura));
            break;

        default:
            puts("Escala inválida!");
            break;
    }
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
