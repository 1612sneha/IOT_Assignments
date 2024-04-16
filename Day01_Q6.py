#Write a Python function to calculate the factorial of a number (a non-negative integer). 
#The function accepts the number as an argument.

num = int(input("Enter number : "))

def fact(num):
    fact = 1
    i = 1
    while i <= num:
        fact = fact * i
        i = i + 1
    return fact
    
factorial = fact(num)

if num < 0:
   print("Sorry, Factorial does not exist for negative numbers")

else:
   print(f"Factorial of {num} is {factorial} only.")
    



