#include <stdint.h>
#include <stdio.h>
#define minLimit INT32_MIN
#define maxLimit INT32_MAX 

int main() {
    int32_t x, y, z, n;

    for(int i = 0; i < 3; i++){
        scanf("%lld", &n);
        if(n < minLimit || n > maxLimit) {
            printf("Invalid value");
            break;
        };

        if(i == 0) {
            x = n;
        } else if(i == 1) {
            y = n;
        } else {
            z = n;
            printf("Result: %lld", (long long) x + y + z);
        }
        
    }

    return 0;
}
