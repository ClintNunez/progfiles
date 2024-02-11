#include <stdio.h>

int main() {
    int arr[7];

    printf("Input 7 array elements:\n");
    for(int i = 0; i < 7; i++) {
        scanf("%i", &arr[i]);
    }

    for(int i = 0; i < 7; i++) {
        if(arr[i] <= 0) arr[i] = 1;
    }

    printf("Array elements:\n");
    for(int i = 0; i < 7; i++) {
        printf("array_nums[%i] = %i\n", i, arr[i]);
    }
    return 0;
}
