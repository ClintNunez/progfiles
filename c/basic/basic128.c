#include <stdio.h>

int main() {
    int n, arr[10];
    
    printf("Input an integer (2-10): ");
    scanf("%i", &n);

    if(n >= 2 && n <= 10) {
        for(int i = 0, j = 0; i < 10; i++, j++) {
            if(j == n) j = 0;
            arr[i] = j;
        }
    }

    for(int i = 0; i < 10; i++) {
        printf("array_nums[%i] = %i\n", i, arr[i]);
    }
    return 0;
}
