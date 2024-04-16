
#Write a Python Program find an area of a rectangle and perimeter of the rectangle.

le = float(input("Enter length of rectangle : "))
br = float(input("Enter breadth of rectangle : "))

print(f"Area of Rectangle = {le * br}")
print(f"Perimeter of Rectangle = {2*(le + br)}")


#area of a rectangle and perimeter of the rectangle. Using Functions

le = float(input("Enter length of rectangle : "))
br = float(input("Enter breadth of rectangle : "))

def perimeter(le, br):
    peri = 2*(le + br)
    return peri

def area(le, br):
    ar = le * br
    return ar

peri = perimeter(le,br)
print(f"Perimeter of Rectangle = {peri}")

ar = area(le,br)
print(f"Area of Rectangle = {ar}")
