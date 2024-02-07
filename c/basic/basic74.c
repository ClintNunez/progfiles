#include <stdio.h>

int main() {
    char letter = 'a';
    int i = 0;

    do {
        printf("%i ", (int) letter);
        letter++;
        if(letter > 'z') letter = 'A';
        i++;

        if(i == 6) {
            printf("\n");
            i = 0;
        } 

    } while(letter != '[');

    return 0;
}
