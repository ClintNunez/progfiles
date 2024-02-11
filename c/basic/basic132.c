#include <stdio.h>

int main() {
    int arr[8], max, pos = 0;

    printf("Input heights(intger values) of the top eight buildings:\n");
    scanf("%i", &arr[0]);
    max = arr[0];
    
    for(int i = 1; i < 8; i++) {
        scanf("%i", &arr[i]);
        if(arr[i] > max) {
            max = arr[i];
            pos = i;
        }
    }
    printf("Heights of the top three building:\n");
    printf("%i\n", max);
    arr[pos] = -1;

    for(int i = 0; i < 2; i++) {
        max = arr[0]; pos = 0;
        for(int j = 0; j < 8; j++) {
            if(arr[j] > max) {
                max = arr[j];
                pos = j;
            }
        }
        printf("%i\n", max);
        arr[pos] = -1;
    }


    return 0;
}
