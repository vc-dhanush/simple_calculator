import math

def calculator():
    print("Simple Calculator")
    print("1. Arithmetic Operations")
    print("2. Exponentials")
    print("3. Factorials")
    print("4. Permutations and Combinations")
    choice = int(input("Enter your choice (1/2/3/4): "))

    if choice == 1:
        arithmetic_operations()
    elif choice == 2:
        exponentials()
    elif choice == 3:
        factorials()
    elif choice == 4:
        permutations_and_combinations()
    else:
        print("Invalid choice. Please try again.")

def arithmetic_operations():
    print("Arithmetic Operations")
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
    choice = int(input("Enter your choice (1/2/3/4): "))

    a = float(input("Enter the first number: "))
    b = float(input("Enter the second number: "))

    if choice == 1:
        result = a+b
        print("Result: ", result)
    elif choice == 2:
        result = a-b
        print("Result: ", result)
    elif choice == 3:
        result = a*b
        print("Result: ", result)
    elif choice == 4:
        if b != 0:
            result = a/b
            print("Result: ", result)
        else:
            print("Error: Division by zero is not allowed.")
    else:
        print("Invalid choice. Please try again.")

def exponentials():
    base = float(input("Enter the base: "))
    exponent = float(input("Enter the exponent: "))
    result = base ** exponent
    print("Result: ", result)

def factorials():
    num = int(input("Enter a number: "))
    result = math.factorial(num)
    print("Result: ", result)

def permutations_and_combinations():
    print("Permutations and Combinations")
    print("1. Permutation")
    print("2. Combination")
    choice = int(input("Enter your choice (1/2): "))

    n = int(input("Enter the value of n : "))
    r = int(input("Enter the value of r : "))

    if choice == 1:
        result = math.factorial(n) / math.factorial(n - r)
        print("Result: ", result)
    elif choice == 2:
        result = math.factorial(n) / (math.factorial(r) * math.factorial(n - r))
        print("Result: ", result)
    else:
        print("Invalid choice. Please try again.")

calculator()