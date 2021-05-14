# lab2-1
import math

s = eval(input("Enter the length: "))
print("The area of pentagon is ")
a = (5 * (s ** 2)) / 4 * math.tan(math.pi / 5)
print(format(a, '<10.2f'))




# lab2-2

Rentdate = eval(input("Enter the rentdate: "))

Returndate = eval(input("Enter the returndate: "))

Number = eval(input("Enter the number of rent books: "))
d = 7 
p = 1
print("Your late fee is $", (Returndate - Rentdate - d) * p)










# lab 2-3

import turtle

turtle.pensize(3) #펜두께3
turtle.penup() #펜올리기
turtle.goto(0, -200) 
turtle.pendown() #펜내리기
turtle.color("yellow") #노란색으로 그리기
turtle.circle(200) #원그리기


turtle.pensize(9) #펜두께 9
turtle.penup() #펜올리기
turtle.goto(-120, 120)
turtle.pendown() #펜내리기
turtle.color("red") #빨간색으로 그리기
turtle.forward(240) # 가장 바깥쪽사각형그리는과정
turtle.right(90)
turtle.forward(240)
turtle.right(90)
turtle.forward(240)
turtle.right(90)
turtle.forward(240)

turtle.pensize(2) #펜두께 2
turtle.penup() #펜올리기
turtle.goto(-100, 100) 
turtle.pendown() #펜내리기
turtle.color("grey") #회색으로 그리기
turtle.right(90) # 안쪽에서 두번째 사각형그리는과정
turtle.forward(200)
turtle.right(90)
turtle.forward(200)
turtle.right(90)
turtle.forward(200)
turtle.right(90)
turtle.forward(200)

turtle.pensize(7) #펜두께7
turtle.penup() #펜올리기
turtle.goto(-40, 40)
turtle.pendown() #펜내리기
turtle.color("light blue") #파란색으로 그리기
turtle.right(90) #맨안쪽사각형 그리는과정
turtle.forward(80)
turtle.right(90)
turtle.forward(80)
turtle.right(90)
turtle.forward(80)
turtle.right(90)
turtle.forward(80)

