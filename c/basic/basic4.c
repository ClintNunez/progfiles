#include <stdio.h>

int main() {
    char lX = 'X';
    char lM = 'M';
    char lL = 'L';

    printf("The reverse for %c%c%c is %c%c%c\n", lX, lM, lL, lL, lM, lX);

    char word[4] = {'X', 'M', 'L', '\0'};
    char temp;

    printf("The reverse for %s", word);

    int start = 0, end = 2;
    while(start != end) {
        temp = word[start];
        word[start] = word[end];
        word[end] = temp;

        start++;
        end--;
    }
    
    printf(" is %s\n", word);
    return 0;
}
