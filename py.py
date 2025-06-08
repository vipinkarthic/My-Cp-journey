import math

def main_menu():
    print("Choose an option:")
    print("1. Calculate Square Root")
    print("2. Calculate Factorial")
    print("3. Calculate Power")
    print("4. Calculate Logarithm")
    print("5. Calculate Tangent")
    choice = int(input("Enter your choice (1-5): \n"))
    return choice

def sqr_root():
    n = float(input("Enter the number: \n"))
    print("The square root of", n, "is", format(math.sqrt(n), ".1f"))

def fact():
    n = int(input("Enter a non-negative integer: \n"))
    print("The factorial of", n, "is", math.factorial(n))

def poww():
    b = float(input("Enter the base: \n"))
    e = float(input("Enter the exponent: \n"))
    print(b, "raised to the power of", e, "is", format(math.pow(b, e), ".1f"))

def log_b():
    n = float(input("Enter the number: \n"))
    b = input("Enter the base (default is e): \n")
    if b == '':
        print("The natural logarithm of", n, "is", format(math.log(n), ".2f"))
    else:
        b = float(b)
        print("The logarithm of", n, "with base", b, "is", format(math.log(n, b), ".2f"))

def tan_c():
    a = float(input("Enter the angle in degrees: \n"))
    r = math.radians(a)
    print("The tangent of", a, "degrees is", format(math.tan(r), ".2f"))

def options(choice):
    if choice == 1:
        sqr_root()
    elif choice == 2:
        fact()
    elif choice == 3:
        poww()
    elif choice == 4:
        log_b()
    elif choice == 5:
        tan_c()

def main():
    c = 'T'
    while c.upper() == 'T':
        choice = main_menu()
        options(choice)
        c = input("Do you want to continue ")

if __name__ == "__main__":
    main()
