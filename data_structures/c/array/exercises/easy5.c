/*
* NOTE  array size is assumed to be 10
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_distinct(int element, int current_size, int distinct_arr[]) {
    for(int i = 0; i < current_size; i++) {
        if(element == distinct_arr[i]) {
            return false;
        }
    }
    return true;
}

void print_distinct(int arr[]) {
    int distinct_arr[10], current_size = 1;
    
    distinct_arr[0] = arr[0];

    for(int i = 1; i < 10; i++) {
        if(is_distinct(arr[i], current_size, distinct_arr)) {
            distinct_arr[current_size] = arr[i];
            current_size++;
        }
    }

    for(int i = 0; i < current_size; i++) {
        printf("%i ", distinct_arr[i]);
    }
    printf("\n");
}

/*
* Given solution:
* works by comparing if the current element is already printed
* by comparing it to the previous elements.
*
* Does everything in one loop instead of my solution using 3 loops,
* 1 extra array and more variables.
*/
void print_distinct_opt(int arr[]) {
    for(int i = 0; i < 10; i++) {
        int j;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                break;
            }
        }

        if(i == j)
            printf("%i ", arr[i]);
    }

    printf("\n");
}

int main(int argc, char **argv) {
    int arr[10];

    for(int i = 1; i < argc; i++) {
        arr[i - 1] = atoi(argv[i]);
    }

    print_distinct(arr);

    print_distinct_opt(arr);

    return 0;
}
