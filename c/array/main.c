#include <stdio.h>
 
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
