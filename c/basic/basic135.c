#include <stdio.h>

int main() {
    int arr[] = {0,0,0,0}, n, nCombination = 0; 

    printf("Input a number: ");
    scanf("%i", &n);
    printf("\na + b + c + d = n\n");
    while((arr[0] + arr[1] + arr[2] + arr[3]) < 36) {

        arr[3]++;
        if(arr[3] == 10) {
            arr[3] = 0;
            arr[2]++;
            if(arr[2] == 10) {
                arr[2] = 0;
                arr[1]++;
                if(arr[1] == 10) {
                    arr[1] = 0;
                    arr[0]++;
                }
            }
        }


        if(n == (arr[0] + arr[1] + arr[2] + arr[3])) {
            printf("%i, %i, %i, %i\n", arr[0], arr[1], arr[2], arr[3]);
            nCombination++;
        }
    }

    printf("\nTotal number of combinations:\n%i", nCombination);

    return 0;
}
