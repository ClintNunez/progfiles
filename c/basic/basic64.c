#include <stdio.h>

int main() {
    int n, max, min, ctr = 0;
    float ave;
    
    printf("Input next positive integer: ");
    scanf("%i", &n);

    if(n > 0) {
        max = min = ave = n;
        ctr++;

        do {
            printf("Input next positive integer: ");
            scanf("%i", &n);
            if(n > 0) {
                if(n > max) 
                    max = n;
                else if(n < min)
                    min = n;

                ave += n;
                ctr++;
            }
            
        } while(n > 0);

        printf("Number of positive values entered is %i\n", ctr);
        printf("Maximum value entered is %i\n", max);
        printf("Minimum value entered is %i\n", min);
        printf("Average value is %.4f\n", ave / ctr);

    } else {
        printf("Invalid input");
    }

    return 0;
}
