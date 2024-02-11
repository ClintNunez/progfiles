#include <stdio.h>

int main() {
    int m, tempM, n, sum = 0;

    printf("Input two numbers (integer values):");
    scanf("%i %i", &m, &n);

    tempM = m;
    for(int i = 0; i < n; tempM++) {
        if(tempM % 2 == 0) {
            sum += tempM;
            i++; 
        }
    }

    printf("Sum of all %i even numbers starting from %i:\n%i", n, m, sum);

    return 0;
}
