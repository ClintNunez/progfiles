#include <stdio.h>

int main() {
    int arr[8];

    printf("Input 8 array elements:\n");
    for(int i = 0; i < 8; i++) {
        scanf("%i", &arr[i]);
    }

    for(int i = 0, j = 7; i < j; i++, j--) {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
    }

    printf("Modified array:\n");
    for(int i = 0; i < 8; i++) {
        printf("array_nums[%i] = %i\n", i, arr[i]);
    }
    return 0;
}
