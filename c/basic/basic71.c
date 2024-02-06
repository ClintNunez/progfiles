#include <stdio.h>

int main() {
    char str1[20], str2[20];
    int charCount = 0;
    
    printf("Input a string: ");
    scanf("%s", str1);

    for (int i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
        charCount++;
    }

    printf("Original string: %s\n", str2);
    printf("Number of characters: %i\n", charCount);
    
    return 0;
}
