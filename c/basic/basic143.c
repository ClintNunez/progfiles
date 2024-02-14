#include <stdio.h>
#include <stdbool.h>

bool isAscending(char *c) {
    for(int i = 0; i < 7; i++) {
        if(c[i] > c[i + 1]) return false;
    }
    return true;
}

bool isDescending(char *c) {
    for(int i = 0; i < 7; i++) {
        if(c[i] < c[i + 1]) return false;
    }
    return true;
}

int sortAscend(char *c) {
    int nAsc = 0;
    char tempc;
    while(!isAscending(c)) {
        for(int i = 0; i < 7; i++) {
            if(c[i] > c[i + 1]) {
                tempc = c[i];
                c[i] = c[i + 1];
                c[i + 1] = tempc;
            }
        }
    }

    for(int i = 10000000, j = 0; i >= 1; i /= 10, j++) {
        nAsc += i * (c[j] - 48);
    }

    return nAsc;
}

int sortDescend(char *c) {
    int nDesc = 0;
    char tempc;
    while(!isDescending(c)) {
        for(int i = 0; i < 7; i++) {
            if(c[i] < c[i + 1]) {
                tempc = c[i];
                c[i] = c[i + 1];
                c[i + 1] = tempc;
            }
        }
    }

    for(int i = 10000000, j = 0; i >= 1; i /= 10, j++) {
        nDesc += i * (c[j] - 48);
    }

    return nDesc;
}

void copyArr(char *cArr1, char *cArr2) {
    for(int i = 0; i < 8; i++) {
        cArr2[i] = cArr1[i];
    }
}

int main() {
    int n, asc, desc;
    char c[9], cTemp[9], cAsc[9], cDesc[9];

    printf("Input an integer created by 8 numbers (0 - 9): ");
    for(int i = 0; i < 8; i++) {
        c[i] = getchar();
    }

    copyArr(c, cTemp); 
    
    asc = sortAscend(cTemp);
    
    copyArr(c, cTemp); 

    desc = sortDescend(cTemp);

    printf("The difference between the largest integer and the smallest integer.\n");
    printf("%i - %i = %i", desc, asc, desc - asc);

    return 0;
}
