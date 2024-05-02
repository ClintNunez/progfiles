#include <stdio.h>
#include "custom_array_header.h"
 
int main() {
    int arr[10] = {1, 2, 3};
    int n = 2; // index of last element
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    TraverseArray(arr, arrSize);

    TraverseArrayFromLastIndex(arr, arrSize);

    printf("Insert element a new element\n");
    n = InsertElement(arr, arrSize, n, 5);

    TraverseArray(arr, arrSize);
    
    printf("Replace element\n");
    ReplaceElement(arr,2,4);

    TraverseArray(arr, arrSize);

    printf("Remove element\n");
    RemoveElement(arr, arrSize, 2);

    TraverseArray(arr, arrSize);

    int e = 5, searchResult = SearchIndexOfElement(arr, arrSize, e);
    switch (searchResult) {
        case -1:
            printf("%i does not exist\n", e);
        break;
        default:
            printf("%i is at index %i\n", e, searchResult);
        break;
    }

    RotateLeft(arr, arrSize, 1);
    
    TraverseArray(arr, arrSize);

    RotateRight(arr, arrSize, 2);
    
    TraverseArray(arr, arrSize);

    return 0;
}
