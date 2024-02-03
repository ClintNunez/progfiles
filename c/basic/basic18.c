#include <stdio.h>

int main() {
    int years, month, days;

    printf("Enter number of days: ");
    scanf("%i", &days);
    
    years = days / 365;
    month = (days % 365) / 30;
    days = days - ((years * 365) + (month * 30));

    printf("Years: %i\nWeeks: %i\nDays: %i", years, month, days);

    return 0;
}
