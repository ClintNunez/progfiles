#include <stdio.h>

int main() {
    int years, weeks, days;

    printf("Enter number of days: ");
    scanf("%i", &days);
    
    years = days / 365;
    weeks = (days % 365) / 7;
    days = days - ((years * 365) + (weeks * 7));

    printf("Years: %i\nWeeks: %i\nDays: %i", years, weeks, days);

    return 0;
}
