#include <stdio.h>
#include <stdbool.h>

int main() {
    char str[5];
    bool isPalindrome = true;

    printf("Input 5 digit num: ");
    scanf("%s", str);
    
    for(int i = 0, j = 4; i < j; i++, j--) {
        if(str[i] != str[j]) isPalindrome = false;
    }

    if(isPalindrome) 
        printf("%s is a palindrome.\n", str);
    else 
        printf("%s is not a palindrome.\n", str);

    return 0;
}
