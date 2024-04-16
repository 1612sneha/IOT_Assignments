#The marks obtained by a student in 3 different subjects are input by the user. 
#Your program should calculate the average of subjects and display the grade. 
#The student gets a grade as per the following rules:
#Average Grade
#90-100 A
#80-89 B
#70-79 C
#60-69 D
#0-59 F


m1 = float(input("Enter Marks in Maths : "))
m2 = float(input("Enter Marks in Science: "))
m3 = float(input("Enter Marks in Sanskrit : "))

average = (m1 + m2 + m3)/3

if average>=90 and average<=100:
    print("Grade is A")

elif average>=80 and average<=89:
    print("Grade is B")

elif average>=70 and average<=79:
    print("Grade is C")

elif average>=60 and average<=69:
    print("Grade is D")

else:
    print("Grade is F")
