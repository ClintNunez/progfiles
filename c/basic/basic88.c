#include <stdio.h>

int main() {
    int n;
    printf("|----------------------------------------------------------------------------------------------------------------------|\n" );
    printf("|extended ASCII table - excluding control characters                                                                   |\n" );
    printf("|   Ch Dec  Hex  |  Ch Dec  Hex   |  Ch Dec  Hex   |  Ch Dec  Hex   |  Ch Dec  Hex   |  Ch Dec  Hex   |  Ch Dec  Hex   |\n" );
    printf("|----------------|----------------|----------------|----------------|----------------|----------------|----------------|\n" );

    for(int i = 32; i <= 63; i++) {
        n = i;
        for(int j = 0; j < 7; j++) {
            if(j != 6) {
                if(n == 127) {
                    printf("| %4s %4i 0x%x ", "DEL", n, n);
                } else {
                    printf("| %4c %4i 0x%x ", (char) n, n, n);
                }
            } else {
                printf("| %4c %4i 0x%x |\n", (char) n, n, n);
            }
            n += 32;
        }
    }
    printf("|----------------------------------------------------------------------------------------------------------------------|\n" );

    return 0;
}
