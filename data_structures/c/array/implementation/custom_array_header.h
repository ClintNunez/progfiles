#ifndef CUSTOM_ARRAY_H
#define CUSTOM_ARRAY_H

void RotateLeft(int arr[],int arrSize, int nRotation);
void RotateRight(int arr[],int arrSize, int nRotation);

int SearchIndexOfElement(int arr[], int arrSize, int e);

int InsertElement(int arr[], int arrSize, int n, int e);

void ReplaceElement(int arr[], int index, int e);

void RemoveElement(int arr[], int arrSize, int e);
void RemoveElementAtIndex(int arr[], int arrSize, int index);

void TraverseArray(int arr[], int arrSize);
void TraverseArrayFromLastIndex(int arr[], int arrSize);

#endif
