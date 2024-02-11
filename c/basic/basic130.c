#include <stdio.h>

int main() {
    int n, min, pos;

    printf("Input the array size: ");
    scanf("%i", &n);

    int arr[n];

    printf("Input array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%i", &arr[i]);
    }

    min = arr[0];
    pos = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i]; 
            pos = i;
        }
    }

    printf("Smallest Value: %i\n", min);
    printf("Position within array: %i", pos);

    return 0;
}
