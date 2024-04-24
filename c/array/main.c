#include <stdio.h>

// arrays will always be passed as pointers in c
void InsertElement(int arr[], int index, int e) {
    arr[index] = e;
}

void RemoveElement(int arr[], int index) {
    arr[index] = 0;
}

void TraverseArray(int arr[], int arrSize) {
    printf("Traverse array from index 0:\n");
    for(int i = 0; i < arrSize; i++) {
        printf("%i ", arr[i]);
    }

    printf("\n");
}

void TraverseArrayFromLastIndex(int arr[], int arrSize) {
    printf("Traverse array from last index:\n");
    for(int i = arrSize - 1; i >= 0; i--) {
        printf("%i ", arr[i]);
    }

    printf("\n");
}

int SearchIndexOfElement(int arr[], int arrSize, int e) {
    for(int i = 0; i < arrSize; i++) {
        if(arr[i] == e) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[10] = {1, 2, 3};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    TraverseArray(arr, arrSize);

    TraverseArrayFromLastIndex(arr, arrSize);

    InsertElement(arr,3,4);

    TraverseArray(arr, arrSize);

    RemoveElement(arr, 0);

    TraverseArray(arr, arrSize);

    int e = 3, searchResult = SearchIndexOfElement(arr, arrSize, e);
    switch (searchResult) {
        case -1:
            printf("%i does not exist", e);
        break;
        default:
            printf("%i is at index %i", e, searchResult);
        break;
    }
    
    return 0;
}
