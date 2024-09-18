#include <iostream>
#include <cmath>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
double divide(double a, double b) { return b == 0 ? NAN : a / b; }
double power(double base, double exp) { return pow(base, exp); }
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
int permutation(int n, int r) {
    if (r > n) return 0;
    return factorial(n) / factorial(n - r);
}
int combination(int n, int r) {
    if (r > n) return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int choice, a, b;
    std::cout << "Choose operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Power\n6. Factorial\n7. Permutation\n8. Combination\n";
    std::cin >> choice;

    if (choice >= 1 && choice <= 5) {
        std::cout << "Enter two numbers: ";
        std::cin >> a >> b;
    }

    if (choice == 1) std::cout << "Result: " << add(a, b) << std::endl;
    else if (choice == 2) std::cout << "Result: " << subtract(a, b) << std::endl;
    else if (choice == 3) std::cout << "Result: " << multiply(a, b) << std::endl;
    else if (choice == 4) std::cout << "Result: " << divide(a, b) << std::endl;
    else if (choice == 5) std::cout << "Result: " << power(a, b) << std::endl;
    else if (choice == 6) {
        std::cout << "Enter a number: ";
        std::cin >> a;
        std::cout << "Result: " << factorial(a) << std::endl;
    }
    else if (choice == 7) {
        std::cout << "Enter n and r: ";
        std::cin >> a >> b;
        std::cout << "Result: " << permutation(a, b) << std::endl;
    }
    else if (choice == 8) {
        std::cout << "Enter n and r: ";
        std::cin >> a >> b;
        std::cout << "Result: " << combination(a, b) << std::endl;
    }
    return 0;
}
