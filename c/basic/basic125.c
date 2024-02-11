#include <stdio.h>

int main() {
    int arr[7], n;

    printf("Input the first element of the array: ");
    scanf("%i", &arr[0]);

    for(int i = 1; i < 7; i++) {
        arr[i] = arr[i - 1] * 2;
    }

    printf("Array elements:\n");
    for(int i = 0; i < 7; i++) {
        printf("array_nums[%i] = %i\n", i, arr[i]);
    }
    return 0;
}
