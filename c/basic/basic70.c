#include <stdio.h>

int main() {
    for(int i = 65; i <= 90; i++) {
        printf("[%i-%c]", i, (char) i);
    }
    printf("\n");
    for(int i = 97; i <= 122; i++) {
        printf("[%i-%c]", i, (char) i);
    }
        
    return 0;
}
