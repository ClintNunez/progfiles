#include <stdio.h>

int main() {
    int size;

    printf("Input the size of the square: ");
    scanf("%i", &size);

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("# ");
        }
        printf("\n");
    }

    return 0;
}
