#include <stdio.h>

int main() {
    int n = -1, sum = 0;
    char c;

    while((c = getchar()) != EOF) {
        if(c >= '0' && c <= '9') {
            if(c == '0') {
                n *= 10;
            } else if(n == -1){
                n = c - 48;
            } else {
                n *= 10;
                n += (c - 48);
            }
        } else if(c == ',') {
            continue;
        } else {
            if(n != -1) {
                sum += n;
                n = -1;
            }
        }
    }

    printf("\nSum of all numerical values embedded in a sentence:\n%i", sum);

    return 0;
}
