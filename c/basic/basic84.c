#include <stdio.h>

int main() {
    int n, ctr = 0;
    float ave = 0;

    printf("Input each number on a separate line (888 to exit):\n");
    while(1) {
        scanf("%i", &n);
        if(n == 888) break;
        ave += n;
        ctr++;
    }

    printf("The average value of the said numbers is %f", ave / ctr);

    return 0;
}
