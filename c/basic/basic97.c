#include <stdio.h>

int main() {
    int nC = 0, w = 0, l = 0;
    char c;

    while((c = getchar()) != EOF) {
        nC++;
        if(c == ' ') {
            w++; 
        } else if(c == '\n') {
            w++;
            l++;
        }     
    }

    printf("Number of Characters = %i\n", nC);
    printf("Number of Words = %i\n", w);
    printf("Number of Line = %i\n", l);

    return 0;
}
