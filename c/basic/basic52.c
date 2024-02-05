#include <stdio.h>

int main() {
    int numArr[6], min, pos = 0;

    printf("Input the array elements:\n");

    for (int i = 0; i < 6; i++) {
        scanf("%i", &numArr[i]);
    }
    
    min = numArr[0];
    for (int i = 1; i < 6; i++) {
        if(numArr[i] < min) {
            min = numArr[i];
            pos = i;
        } 
    }

    printf("Smallest Value: %i\n Position of the element: %i", min, pos);
    
    return 0;
}
