# lab2-1
#오각형 넓이 구하기
import math

s = eval(input("Enter the length: "))
print("The area of pentagon is ")
a = (5 * (s ** 2)) / 4 * math.tan(math.pi / 5)
print(format(a, '<10.2f'))




# lab2-2
# 도서관 연체비 계산
Rentdate = eval(input("Enter the rentdate: "))
Returndate = eval(input("Enter the returndate: "))
Number = eval(input("Enter the number of rent books: "))
d = 7
p = 1
print("Your late fee is $", (Returndate - Rentdate - d) * p)


# lab 2-3
# turtle library이용 - 그림그리기
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

turtle.pensize(8)
turtle.penup()
turtle.goto(500,0)
turtle.pendown()
turtle.color("black")
turtle.circle(100)


turtle.pensize(3)
turtle.penup()
turtle.goto(375,60)
turtle.pendown()
turtle.begin_fill()
turtle.color("black")
turtle.circle(10)
turtle.end_fill()

turtle.pensize(3)
turtle.penup()
turtle.goto(440,60)
turtle.pendown()
turtle.begin_fill()
turtle.color("black")
turtle.circle(10)
turtle.end_fill()

turtle.pensize(3)
turtle.penup()
turtle.goto(390,-10)
turtle.pendown()
turtle.color("black")
turtle.right(90)
turtle.forward(30)
turtle.left(120)
turtle.forward(30)
turtle.left(120)
turtle.forward(30)



turtle.hideturtle()

turtle.done()
