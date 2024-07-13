print("welcome in the calculator software ")
name = input("enter the name of yours =")
while True:
    first_number = float(input("Enter the first number: "))
    operator = input("Enter the operator: ")

    match operator:
        case "+":
            second_number = float(input("Enter the second number: "))
            print("Your answer =", first_number + second_number)
        case "-":
            second_number = float(input("Enter the second number: "))
            print("Your answer =", first_number - second_number)
        case "*":
            second_number = float(input("Enter the second number: "))
            print("Your answer =", first_number * second_number)
        case "/":
            second_number = float(input("Enter the second number: "))
            print("Your answer =", first_number / second_number)
        case "%":
            second_number = float(input("Enter the second number: "))
            print("Your answer =", first_number % second_number)
        case "^":
            number = int(input("enter the number which you want square = "))
            print("your answer is = ",number*number)

        case _:
            print("You entered the wrong operator. Please enter it again.")
            continue


    user_input = input("Do you want to perform another calculation? (yes/no): ")
    if user_input.lower() != "yes":
        break
print("",name,"thank you for visit the software")