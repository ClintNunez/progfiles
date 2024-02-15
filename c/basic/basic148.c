#include <stdio.h>

int main() {
    int n;

    printf("Input number of rows/columns: ");
    scanf("%i", &n);

    int arr2d[n][n];

    printf("Input the cell value\n");
    
    for(int i = 0; i < n; i++) {
        printf("Row %i input cell values\n", i);
        for(int j = 0; j < n; j++) {
            scanf("%i", &arr2d[i][j]);
        }
        printf("\n");
    }

    printf("Result:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%5i ", arr2d[i][j]);
        }
        printf("\n");
    }


    return 0;
}
