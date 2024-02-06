#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char str;
    FILE * fptr;

    fptr = fopen("rand.dat", "w");
    if (fptr == NULL) {
        printf("File not found.");
        return 0;
    }

    srand(time(NULL));
    
    fprintf(fptr, "50\n");

    double max = 0.5, min = -0.5;

    for (int i = 0; i < 50; i++) {
        fprintf(fptr, "%.4lf\n", ((double)rand() / RAND_MAX) - 0.5);
    }

    // close to open for reading
    fclose(fptr);

    // read content
    fopen("rand.dat", "r");
    str = fgetc(fptr);

    while (str != EOF) {
        printf("%c", str);
        str = fgetc(fptr);
    }

    fclose(fptr);
    
    return 0;
}
