#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isAscending(int arr[3]) {
    for(int i = 0; i < 2; i++) {
        if(arr[i] > arr[i + 1]) return false;
    }

    return true;
}

int main() {
    int arr[3];
    bool valid = true;

    printf("Input the three sides of a triangle: ");
    for(int i = 0; i < 3; i++) {
        scanf("%i", &arr[i]);
        if(arr[i] <= 1 || arr[i] >= 1000) {
            valid = false;
            break;
        }
    }


    if(valid) {
        while(!isAscending(arr)) {
            for(int i = 0; i < 2; i++) {
                if(arr[i] > arr[i + 1]) {
                    arr[i] += arr[i + 1];
                    arr[i + 1] = arr[i] - arr[i - 1];
                    arr[i] = arr[i] - arr[i - 1];
                }
            }  
        }

        if(pow(arr[2], 2) == (pow(arr[0], 2) + pow(arr[1], 2))) {
            printf("It is a right angle triangle.");
        } else {
            printf("It is not a right angle triangle.");
        }

    }

    return 0;
}
