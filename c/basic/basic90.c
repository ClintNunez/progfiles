#include <stdio.h>
#include <stdbool.h>

bool isPrimePalindrome(int n) {
    char numStr[10];
    int start = 0, end, i = 0;
    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    
    while(n != 0) {
        numStr[i] = n / 100;
        n %= n;
        i++;
    }
    end = i;
    
    while(start < end) {
        if(numStr[start] != numStr[end]) {
            return false;
        }
    }

    return true;
}

int main() {
    int x, y, i = 0;
    
    printf("Input x, y: ");
    scanf("%i %i", &x, &y);
    if((x >= 5) && (x < y) && (y <= 1000000000)) {
        printf("List of prime palindromes:\n");
        while(x <= y) {
            printf("reached");
            if(isPrimePalindrome(x)) {
                printf("%12i\n", x);
            }
            x++;
        }
    }
    
    return 0;
}
