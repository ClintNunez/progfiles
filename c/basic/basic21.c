#include <stdio.h>

int main() {
    int num, onesDigit, tenthsDigit;
    
    printf("Input an integer: ");
    scanf("%i", &num);
    if(num <= 80 && num >= 0) {
        tenthsDigit = num / 10;
        onesDigit = num % 10;

        if(onesDigit > 0) {
            num = ++tenthsDigit * 10;
            printf("Range [0, %i]", num);
        } else {
            num = tenthsDigit * 10;
            printf("Range [0, %i]", num);
        }
    } else {
        printf("Error, integer invalid.\n");
    }

    return 0;
}
