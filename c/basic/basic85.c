#include <stdio.h>

int main() {
    int n;

    for(int i = 1; i <= 100; i++) {
        n = i;
        printf("%-6i ", n);
        while(n > 0) {
            if(n == 100) {
                printf("C");
                n -= 100;
            } else if(n >= 50) {
                printf("L");
                n -= 50;
            } else if(n >= 10) {
                printf("X");
                n -= 10;
            } else if(n >= 5) {
                if(n == 9) {
                    printf("IX");
                    n = -1;
                } else {
                    printf("V");
                    n -= 5;
                }
            } else if(n > 0) {
                if(n == 4) {
                    printf("IV");
                    n = -1;
                } else {
                    printf("I");
                    n -= 1;
                }
            }         
        }
        printf("\n");
    }

    return 0;
}
