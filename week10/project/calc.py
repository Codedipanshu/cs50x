def addition(x, y):
    return x + y

def subtraction(x, y):
    return x - y

def multiply(x, y):
    return x * y

def deviation(x, y):
    return x / y

def main():
    print("Your cmd Calculator")
    print("1:Addition")
    print("2:Subtraction")
    print("3:Multiply")
    print("4:Deviation")

    while True:
        choice = input("Enter a choice(1/2/3/4): ")
        if choice in ("1", "2", "3", "4"):
            x = float(input("Enter first number: "))
            y = float(input("Enter second number: "))

            if choice == "1":
                print(f"First number + Second number = {addition(x, y)}")

            elif choice == "2":
                print(f"First number + Second number = {subtraction(x, y)}")

            elif choice == "3":
                print(f"First number * Second number = {multiply(x, y)}")

            elif choice == "4":
                print(f"First number / Second number = {deviation(x, y)}")
            break
        else:
            print("Simpley enter a choice from above list")

main()