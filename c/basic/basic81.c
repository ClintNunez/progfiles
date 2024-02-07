#include <stdio.h>

int main() {
    int size;

    printf("Input the size of the square: ");
    scanf("%i", &size);

    for(int i = 0; i < size; i++) {
        if(i == 0 || i == size - 1) {
            for(int j = 0; j < size; j++) {
                printf("#");
            }
        } else {
            for(int k = 0; k < size; k++) {
                if(k == 0 || k == size - 1) {
                    printf("#");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
