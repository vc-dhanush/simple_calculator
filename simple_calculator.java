import java.util.Scanner;

public class Simple_calculator {

    static double add(double a, double b) {
        return a + b;
    }

    static double subtract(double a, double b) {
        return a - b;
    }

    static double multiply(double a, double b) {
        return a * b;
    }

    static double divide(double a, double b) {
        if (b == 0) {
            return Double.NaN;
        }
        return a / b;
    }

    static double power(double a, double b) {
        return Math.pow(a, b);
    }

    static int factorial(int n) {
        if (n == 0 || n == 1) return 1;
        return n * factorial(n - 1);
    }

    static int permutation(int n, int r) {
        return factorial(n) / factorial(n - r);
    }

    static int combination(int n, int r) {
        return factorial(n) / (factorial(r) * factorial(n - r));
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first number: ");
        double num1 = sc.nextDouble();
        System.out.println("Enter second number: ");
        double num2 = sc.nextDouble();
        System.out.println("Enter the operation (+, -, *, /, ^, !, P, C): ");
        char op = sc.next().charAt(0);

        if (op == '+') {
            System.out.println(add(num1, num2));
        } else if (op == '-') {
            System.out.println(subtract(num1, num2));
        } else if (op == '*') {
            System.out.println(multiply(num1, num2));
        } else if (op == '/') {
            System.out.println(divide(num1, num2));
        } else if (op == '^') {
            System.out.println(power(num1, num2));
        } else if (op == '!') {
            System.out.println(factorial((int) num1));
        } else if (op == 'P') {
            System.out.println(permutation((int) num1, (int) num2));
        } else if (op == 'C') {
            System.out.println(combination((int) num1, (int) num2));
        } else {
            System.out.println("Invalid operation");
        }

        sc.close();
    }
}
