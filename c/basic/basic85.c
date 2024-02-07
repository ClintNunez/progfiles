#include <stdio.h>

int main() {
    for(int i = 1; i <= 100; i++) {
        while(i >= 0) {
            if(i - 100 >= 0) {
                printf("C");
                i -= 100;
            } else if(i - 50 >= 0) {
                printf("L");
                i -= 50;
            } else if(i - 10 >= 0) {
                printf("X");
                i -= 10;
            } else if(i - 5 >= 0) {
                printf("V");
                i -= 5;
            } else if(i - 1 >= 0) {
                printf("C");
                i -= 1;
            } 
        }
    }

    return 0;
}
