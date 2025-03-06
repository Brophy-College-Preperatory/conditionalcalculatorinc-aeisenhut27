#include <stdio.h>

double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    return a / b;
}

int main() {
    double a,b;
    printf("First Number: ");
    scanf("%lf", &a);
    printf("Second Number: ");
    scanf("%lf", &b);
    printf("a + b = %f\n", add(a, b));
    printf("a - b = %f\n", subtract(a, b));
    printf("a * b = %f\n", multiply(a, b));
    if (b == 0) {
        printf("Divide by 0 error\n");
        return 1;
    } else {
        printf("a / b = %f\n", divide(a, b));
    }
    return 0;
}