"""
2] Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values If user enters a 4 digit number 9361 outp
ut should be
a. 9 3 6 1
b. 9361 = 9 000 + 300 + 60 + 9
c. 1639
"""


x =(input("enter a 4 digit number : "))
if (len(x)>4 or len(x)<4):
     print("invalid input")
else:
     num = int(x)
     #face value 
     af = int(num%10)  #//1
     #place value 
     ap = af *1
     num = int(num/10) #//936
     bf = int(num%10) #//6
     bp = bf*10
     num = int(num/10) #//93
     cf = int(num%10) #//3
     cp = cf *100
     num = int(num/10)
     df = int (num)   #//9
     dp = df *1000
     
     print(f"Face value : {df } {cf} {bf} {af}")  #face value
     print(f"digit value: {dp} +{cp} +{bp}+{ap}") # digit value
     print(f"Reverse no.: {af}{bf}{cf}{df}")      # reverse number 