#include <float.h>
#include <stdint.h>
#include <stdio.h>

int main() {
    printf("Ranges for integer data types in C:\n");

    printf("--------------------------------------------------\n");
    printf("%-20s %-20d %-20d\n", "int8_t", INT8_MIN, INT8_MAX);
    printf("%-20s %-20d %-20d\n", "int16_t", INT16_MIN, INT16_MAX);
    printf("%-20s %-20d %-20d\n", "inu32_t", INT32_MIN, INT32_MAX);
    printf("%-20s %-20lu %-20lu\n", "int64_t", INT64_MIN, INT64_MAX);
    printf("%-20s %-20d %-20d\n", "uint8_t", 0, UINT8_MAX);
    printf("%-20s %-20d %-20d\n", "uint16_t", 0, UINT16_MAX);
    printf("%-20s %-20d %-20u\n", "uint32_t", 0, UINT32_MAX);
    printf("%-20s %-20lu %-20lu\n", "uint64_t", 0lu, UINT64_MAX);

    printf("Ranges for real number data types in C:\n");
    printf("--------------------------------------------------\n");
    printf("%-20s %14.7g %14.7g\n", "float", FLT_MIN, FLT_MAX);
    printf("%-20s %14.7g %14.7g\n", "double", DBL_MIN, DBL_MAX);
    printf("%-20s %14.7Lg %14.7Lg\n", "long double", LDBL_MIN, LDBL_MAX);
    return 0;
}
