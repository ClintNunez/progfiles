#include <stdio.h>

int main() {
    int blank = 0, tab = 0, newline = 0;
    char c;

    while((c = getchar()) != EOF) {
        if(c == ' ') blank++;
        if(c == '\t') tab++;
        if(c == '\n') newline++;
    }


    printf("blank=%i, tab=%i, newline=%i", blank, tab, newline);
    return 0;
}
