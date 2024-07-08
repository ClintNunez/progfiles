/*
* NOTE  array size is assumed to be 8
*/
#include <stdio.h>
#include <stdlib.h>

void waveForm(int arr[]) {
    int temp;
    for(int i = 1; i <= 8; i++) {
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

int main(int argc, char **argv) {
    int arr[8];

    for(int i = 1; i < argc; i++) {
        arr[i - 1] = atoi(argv[i]);
    }

    waveForm(arr);

    return 0;
}
