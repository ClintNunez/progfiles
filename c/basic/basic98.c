#include <stdio.h>

int main() {
    char c;

    while((c = getchar()) != EOF) {
        if(c == ' ') printf("\n");
        else printf("%c", c);
    }

    return 0;
}
