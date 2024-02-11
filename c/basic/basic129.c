#include <stdio.h>

int main() {
    float arr[10], n;

    printf("Input the first element of the array: ");
    scanf("%f", &n);

    arr[0] = n;
    for(int i = 1; i < 10; i++) {
        arr[i] = arr[i - 1] / 3;
    }

    printf("Array elements:\n");
    for(int i = 0; i < 10; i++) {
        printf("array_nums[%i] = %.4f\n", i, arr[i]);
    }
    return 0;
}
