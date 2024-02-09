#include <math.h>
#include <stdio.h>

int main() {
    float h, w, bmi;

    printf("Input weight and height: ");
    scanf("%f %f", &w, &h);

    bmi = w / pow(h, 2);
    printf("BMI = %.6f\n", bmi);

    if(bmi < 18.5) printf("Underweight");
    else if(bmi >= 18.5 && bmi < 25) printf("Normal weight");
    else if(bmi >= 25 && bmi < 30) printf("Overweight");
    else printf("Obese");

    return 0;
}
