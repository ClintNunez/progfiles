#include <stdio.h>

int main() {
    int hours, minutes, seconds;

    printf("Input seconds: ");
    scanf("%i", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds - ((hours * 3600) + (minutes * 60));

    printf("H:M:S - %i:%i:%i", hours, minutes, seconds);

    return 0;
}
