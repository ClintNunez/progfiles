#include <stdio.h>

int main() {
    int nP = 0, nN = 0;
    float pAve = 0, nAve = 0, input;

    printf("Input 7 numbers (int/float):\n");
    for(int i = 0; i < 7; i++) {
        scanf("%f", &input);
        if(input > 0) {
            pAve += input;
            nP++;
        } else {
            nAve += input;
            nN++;
        }
    }
    printf("%i Number of positive numbers: Average %.2f\n", nP, pAve / nP);
    printf("%i Number of negative numbers: Average %.2f\n", nN, nAve / nN);


    return 0;
}
