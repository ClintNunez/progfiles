#include <stdio.h>

int main() {
    int n = 0;
    float amount, currencyArr[] = {100, 50, 20, 10, 5, 1, 0.50, 0.25};

    printf("Input the amount: ");
    scanf("%f", &amount);

    for(int i = 0; amount != 0; i++) {
        if(i == 0) printf("Currency Notes:\n");
        else if(i == 3) printf("\nCurrency coins:\n");
        
        n = amount / currencyArr[i];
        if(i < 3) {
            printf("%.f number of  Notes(s): %i\n", currencyArr[i], n);
        } else {
            printf("%.2f number of  Notes(s): %i\n", currencyArr[i], n);
        }
        amount = amount - (n * currencyArr[i]);
    }

    return 0;
}
