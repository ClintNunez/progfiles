#include <stdio.h>
#include "custom_array_header.h"

void RotateLeft(int arr[],int arrSize, int nRotation) {
    int temp;
    for(int i = 0; i < nRotation; i++) {
        temp = arr[0];
        for(int i = 0; i < arrSize - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[arrSize - 1] = temp;
    }
}

void RotateRight(int arr[],int arrSize, int nRotation) {
    int temp;
    for(int i = 0; i < nRotation; i++) {
        temp = arr[arrSize - 1];
        for(int i = arrSize - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }
}

int SearchIndexOfElement(int arr[], int arrSize, int e) {
    for(int i = 0; i < arrSize; i++) {
        if(arr[i] == e) {
            return i;
        }
    }

    return -1;
}

int InsertElement(int arr[], int arrSize, int n, int e) {
    if(n + 1 >= arrSize) {
        printf("Error");
    } else {
        arr[n + 1] = e;
        return n + 1;
    }

    return -1;
}

void ReplaceElement(int arr[], int index, int e) {
    arr[index] = e;
}

void RemoveElement(int arr[], int arrSize, int e) {
    int index = SearchIndexOfElement(arr, arrSize, e);
    
    for(int i = index; i < arrSize - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

void RemoveElementAtIndex(int arr[], int arrSize, int index) {
    for(int i = index; i < arrSize - 1; i++) {
        arr[i] = arr[i + 1];
    }
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
