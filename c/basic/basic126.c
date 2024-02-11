#include <stdio.h>

int main() {
    int arr[7];

    printf("Input 7 array elements:\n");
    for(int i = 0; i < 7; i++) {
        scanf("%i", &arr[i]);
    }

    printf("Array positions that store a value less or equal to 0:\n");
    for(int i = 0; i < 7; i++) {
        if(arr[i] <= 0) printf("array_nums[%i] = %i\n", i, arr[i]);
    }
    return 0;
}
