#include <stdio.h>

int main() {
    char str[7];

    printf("Input a seven digit number: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }

    return 0;
}
