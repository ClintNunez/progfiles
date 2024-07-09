/*
* NOTE  array size is assumed to be 8
*/
#include <stdio.h>
#include <stdlib.h>

void waveForm(int arr[]) {
    for(int i = 1; i <= 8; i++) {
        int temp;

        if(i % 2 != 0) { // large
            if(arr[i - 1] < arr[i]) {
                temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
            }
        } else { // small
            if(arr[i - 1] > arr[i]) {
                temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
            }
        }   
    }

    printf("{");
    for(int i = 0; i < 8; i++) {
        printf("%i, ", arr[i]);
    }
    printf("}\n");
}

/*
* Given solution:
* Only checks even index, if it is less than the previous
* or greater than next.
*
* Only compares (2n)/2 times compared to checking even 
* and odd index, which compares 2n times
*/
void waveFormOpt(int arr[]) {
    for(int i = 0; i < 8; i += 2) {
        int temp;

        if(i > 0 && arr[i - 1] > arr[i]) {
            temp = arr[i - 1];
            arr[i - 1] = arr[i];
            arr[i] = temp;
        }

        if(i < 7 && arr[i] < arr[i + 1]) {
            temp = arr[i - 1];
            arr[i - 1] = arr[i];
            arr[i] = temp;

        }
    }

    printf("{");
    for(int i = 0; i < 8; i++) {
        printf("%i, ", arr[i]);
    }
    printf("}\n");
}

void copyArr(int arr[], int tempArr[]) {
    for(int i = 0; i < 8; i++) {
        tempArr[i] = arr[i];
    }
}

int main(int argc, char **argv) {
    int arr[8];

    for(int i = 1; i < argc; i++) {
        arr[i - 1] = atoi(argv[i]);
    }

    int tempArr[8];
    copyArr(arr, tempArr);
    waveForm(tempArr);

    copyArr(arr, tempArr);
    waveForm(tempArr);

    return 0;
}
