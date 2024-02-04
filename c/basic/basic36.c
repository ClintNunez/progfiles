#include <stdio.h>

int main() {
    const int PASS = 1234;
    int inputPass;

    printf("Input the password: ");
    scanf("%i", &inputPass);

    (inputPass == PASS) ? 
        printf("Correct password") : printf("Incorrect password");

    return 0;
}
