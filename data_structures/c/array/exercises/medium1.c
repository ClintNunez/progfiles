#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
*  Can be optimized by doing this algorithm directly when 
*  copying values from argv.
*/

void sort(int input_arr[], int final_arr[]) {
    for(int i = 0; i < 10; i++) {
        if(input_arr[i] >= 0) {
            final_arr[input_arr[i]] = input_arr[i];
        }
    }
        
    for(int i = 0; i < 10; i++) {
        printf("%i ", final_arr[i]);
    }
    printf("\n");
}


/*
* Given solution:
* if current element is not -1 and is not in its correct position,
* check if its correct position is also not -1. If not, copy the 
* element from the correct position and replace it with the correct(current) 
* element. Repeat the process until the conditions are not met.
*
* At the end of each loop, check if the element in the current index (i) 
* is correct. If not replace it with -1.
*
*
* O(n) time and O(1) space
*/

void fixArray(int A[]) {
    for(int i = 0; i < 10; i++) {
        if(A[i] != -1 && A[i] != i) {
            int x = A[i];
        
            while(A[x] != -1 && A[x] != x) {
                int y = A[x];

                A[x] = x;
                x = y;
            }

            A[x] = x;
            
            if(A[i] != i) {
                A[i] = -1;
            }
        }
    }
}

int main(int argc, char **argv) {
    int input_arr[10], final_arr[10];

    for(int i = 1; i < argc; i++) {
        input_arr[i - 1] = atoi(argv[i]);
    }

    memset(final_arr, -1, sizeof(final_arr));

    sort(input_arr, final_arr);

    fixArray(input_arr);

    for(int i = 0; i < 10; i++) {
        printf("%i ", input_arr[i]);
    }

    return 0;
}
