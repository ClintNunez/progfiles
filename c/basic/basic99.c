#include <stdio.h>

int main() {
    int numBar, valArr[11]; 

    printf("Input number of histogram bar (Maximum of 10): ");
    scanf("%i", &numBar);
    
    printf("Input the values between 0 and 10: ");
    for(int i = 0; i < numBar; i++) {
        scanf("%i", &valArr[i]);
    }

    printf("\nHistogram: ");
    for(int i = 0; i < numBar; i++) {
        for(int j = 0; j < valArr[i]; j++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
