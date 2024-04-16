#Write a Python function to find the maximum of three numbers.

num1 = float(input("Enter num1. : "))
num2 = float(input("Enter num2 : "))
num3 = float(input("Enter num3 : "))

def maximum(num1, num2, num3):
    if num1>num2:
        if num1>num3:
            print(f"num1 = {num1} is greater")

    elif num2>num3:
        print(f"num2 = {num2} is greater")

    elif num3>num1:
        print(f"num3 = {num3} is greater")

maximum(num1, num2, num3)
