#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

float divide(int a, int b) { 
    if (b == 0) return 0;
    return (float)a / b;
}

int exponent(int base, int exp) {
    if (exp == 0) return 1;
    int result = base;
    for (int i = 1; i < exp; i++) result *= base;
    return result;
}

int factorial(int n) {
    if (n == 0) return 1;
    int fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

int permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int combination(int n, int r) {
    return permutation(n, r) / factorial(r);
}

int main() {
    int choice, a, b, n, r;
    printf("Enter 1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division\n");
    printf("Enter 5 for Exponentiation, 6 for Factorial, 7 for Permutation, 8 for Combination\n");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
    }

    if (choice == 1) printf("Result: %d\n", add(a, b));
    else if (choice == 2) printf("Result: %d\n", subtract(a, b));
    else if (choice == 3) printf("Result: %d\n", multiply(a, b));
    else if (choice == 4) printf("Result: %.2f\n", divide(a, b));
    else if (choice == 5) {
        printf("Enter base and exponent: ");
        scanf("%d %d", &a, &b);
        printf("Result: %d\n", exponent(a, b));
    } 
    else if (choice == 6) {
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("Result: %d\n", factorial(n));
    }
    else if (choice == 7) {
        printf("Enter n and r: ");
        scanf("%d %d", &n, &r);
        printf("Result: %d\n", permutation(n, r));
    }
    else if (choice == 8) {
        printf("Enter n and r: ");
        scanf("%d %d", &n, &r);
        printf("Result: %d\n", combination(n, r));
    }

    return 0;
}
