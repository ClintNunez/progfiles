/*
* NOTE  size of array is assumed to be 5
*/
#include <stdio.h>
#include <stdlib.h>

void subArrSum(int arr[], int sum) {
    
    for(int i = 0; i < 5; i++) {
        int currentSum = 0;
        for(int j = i; j < 5; j++) {
            currentSum += arr[j];

            if(currentSum == sum) {
                printf("Sum found between indexes %i and %i\n", i, j);
                break;
            }
        }
    }
}

int main(int argc, char **argv) {
    int arr[5], sum;

    for(int i = 1; i < argc - 1; i++) {
        arr[i - 1] = atoi(argv[i]);
    }
    
    sum = atoi(argv[argc - 1]);

    subArrSum(arr, sum);
    return 0;
}
