#include <stdio.h>

int sumArr(int arr[9], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    return sum;
}

int sumArrDec(int arr[9], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    return sum;
}
int main() {
    int n, s, nComb = 0;
    printf("Input the number: ");
    scanf("%i", &n);
    printf("Sum of the digits: ");
    scanf("%i", &s);

    int digits[n], existingComb[];

    
    while(sumArr(digits, n) < (9 * n)) { // checks if limit is reached
        
        if(n == sumArr(digits, n)) {
            if()
            nComb++;
        }
    }
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


    }

    printf("Number of combinations: %i", nComb);
    
    return 0;
}
