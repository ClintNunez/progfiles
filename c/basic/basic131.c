#include <stdio.h>
#include <stdbool.h>

int main() {
    char str1[20], str2[20];
    int str1Len = 0, str2Len = 0;
    bool isPresent = true;

    printf("Input the first string: ");
    fgets(str1, 20, stdin);

    printf("Input the first string: ");
    fgets(str2, 20, stdin);

    for(int i = 0; str1[i] != ' ' && str1[i] != '\0'; i++) {
        str1Len++;
    }
    for(int i = 0; str2[i] != ' ' && str2[i] != '\0'; i++) {
        str2Len++;
    }

    printf("Is second string present in the last part of the first string?\n");
    for(int i = str1Len - str2Len, j = 0; i < str1Len; i++, j++) {
        if(str1[i] != str2[j]) {
            isPresent = false;
            break;
        }
    }

    if(isPresent) {
        printf("Present!");
    } else {
        printf("Not Present!");
    }

    return 0;
}
