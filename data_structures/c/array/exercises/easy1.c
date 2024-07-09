/*
* NOTE  length of input array is assumed to be 5
*/
#include <stdio.h>
#include <stdlib.h>

void rotateLeft(int arr[], int nRotation) {
    int temp;
    for(int i = 0; i < nRotation; i++) {
        temp = arr[0];
        for(int i = 0; i < 4; i++) {
            arr[i] = arr[i + 1];
        }
        arr[4] = temp;
    }

    for(int i = 0; i < 5; i++) {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

void copyArr(int arr[], int tempArr[]) {
    for(int i = 0; i < 5; i++) {
        tempArr[i] = arr[i];
    }
}

/*
* Given solution:
* uses modulo operation to get the starting index
* and prints the array from there.
*
* Saves space by manipulating the index instead
* of manipulating a copy of the given array.
*/
void rotateLeftOpt(int arr[], int nRotation) {
    int mod = nRotation % 5;
        
    for(int i = 0; i < 5; i++) {
        printf("%i ", arr[(mod + i) % 5]);
    }
    printf("\n");
}

int main(int argc, char ** argv) {
    int arr[5], i;

    for(i = 1; i < 6; i++) {
        arr[i - 1] = atoi(argv[i]);
    }

    int nRotationArgs = argc - i;
    int arrRotation[nRotationArgs];
    for(int j = 0; i < argc; j++, i++) {
        arrRotation[j] = atoi(argv[i]);
    }

    printf("Rotating a copy of given array:\n");
    for(i = 0; i < nRotationArgs; i++) {
        int tempArr[5];
        copyArr(arr, tempArr);
        rotateLeft(tempArr, arrRotation[i]);
    }

    printf("\nShifting the starting index before print:\n");
    for(i = 0; i < nRotationArgs; i++) {
        rotateLeftOpt(arr, arrRotation[i]);
    }
    return 0;
} 
