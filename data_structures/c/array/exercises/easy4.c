/*
* NOTE  array size is assumed to be 7
*/
#include <stdio.h>
#include <stdlib.h>

void max_min_sort(int arr[], int sorted_arr[]) {
    for(int i = 0, small = 0, large = 6; i < 7; i+=2, small++, large--) {
        sorted_arr[i] = arr[large];
        sorted_arr[i + 1] = arr[small];
    }

    for(int i = 0; i < 7; i++) {
        printf("%i ", sorted_arr[i]);
    }
    printf("\n");
}

int main(int argc, char **argv) {
    int arr[7], sorted_arr[7];

    for(int i = 1; i < argc; i++) {
        arr[i - 1] = atoi(argv[i]);
    }

    max_min_sort(arr, sorted_arr);

    return 0;
}
