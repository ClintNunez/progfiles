#include <stdio.h>

int main() {
    
    printf("Celsius to Fahrenheit\n");
    printf("---------------------\n");
    printf("Celsius    Fahrenheit\n");
    for(float i = 0; i <= 150; i++) {
        printf(" %8.1f    %8.1f\n", i, (i * 1.8) + 32);
    }

    printf("\nFahrenheit to Celsius\n");
    printf("---------------------\n");
    printf("Fahrenheit    Celsius\n");
    for(float i = 0; i <= 150; i++) {
        printf(" %8.1f    %8.1f\n", i, (i - 32) / 1.8);
    }

    return 0;
}
