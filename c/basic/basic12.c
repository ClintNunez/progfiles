#include <stdio.h>

int main() {
    char ID[10];
    int workingHrs, salary;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", ID);

    printf("Input the working hrs: ");
    scanf("%i", &workingHrs);

    printf("Salary amount/hr: ");
    scanf("%i", &salary);

    printf("Employees ID = %s\nSalary = $%.2f", ID, ((double) salary * workingHrs));

    return 0;
}
