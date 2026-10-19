#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float pi = 3.14159;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}