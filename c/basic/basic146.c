#include <stdio.h>

int main() {
    int ctr = 0;
    char c[7] = {' ', ' ', ' ', ' ', ' ', ' ', '\0'}, cIn;

    while((cIn = getchar()) != EOF) {
        if((cIn >= 'A' && cIn <= 'Z') || (cIn >= 'a' && cIn <= 'z')) {
            c[ctr] = cIn;
            ctr++; 
        } else {
            if(ctr >= 3 && ctr <= 6) {
                printf("%s\n", c);
            }
            ctr = 0;
            for(int i = 0; i < 7; i++) {
                c[i] = ' ';
            }
        }
    }

    return 0;
}
