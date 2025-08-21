
#include <stdio.h>

int main() {
    float a, b, c;

    // Input the sides
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Check triangle validity
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The triangle is valid.\n");

        // Identify the type of triangle
        if (a == b && b == c) {
            printf("It is an Equilateral triangle.\n");
        } else if (a == b || b == c || a == c) {
            printf("It is an Isosceles triangle.\n");
        } else {
            printf("It is a Scalene triangle.\n");
        }
    } else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}

