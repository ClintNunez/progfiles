#include <stdio.h>

int main() {
    int n[100] = {0}, input, max = 0; 
    
    printf("Input the terms of the sequence: ");
    for(int i = 0; i < 100 && (scanf("%i", &input)) != EOF; i++) {
        n[input]++;

        if(n[input] > max) max = n[input];
    }

    printf("Mode values of the said sequence in ascending order: ");
    for(int i = 0; i < 100; i++) {
        if(max == n[i]) {
            printf("%i\n", i);
        }
    }


    
    

    return 0;
}
