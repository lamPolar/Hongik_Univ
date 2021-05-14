#lab 4-1
#소수의 합 구하기
sum1 = 0
number1 = 1
while number1 <= 100 :
        if (number1 % 2 != 0 and number1 % 3 != 0):
                sum1 += number1
                number1 += 1
        else:
                number1 += 1

print("Sum is ", sum1)



#lab 4-2
#0이상의 수 5개의 곱 구하기
number1 = eval(input("Enter number1: "))
while number1 < 0:
	number1 = eval(input("Enter number1: "))
	continue
number2 = eval(input("Enter number2: "))
while number2 < 0:
	number2 = eval(input("Enter number2: "))
	continue
number3 = eval(input("Enter number3: "))
while number3 < 0:
	number3 = eval(input("Enter number3: "))
	continue
number4 = eval(input("Enter number4: "))
while number4 < 0:
	number4 = eval(input("Enter number4: "))
	continue
number5 = eval(input("Enter number5: "))
while number5 < 0:
	number5 = eval(input("Enter number5: "))
	continue

sum2 = number1 * number2 * number3 * number4 * number5

print("Sum is ", sum2)



#lab 4-3
#num1가 1부터 99일때 까지 num1/(num1+2) 의 합 구하기
sum3 = 0
num1 = 1
while num1 < 100:
    sum3 += num1 / (num1+2)
	num1 += 2
print("Sum is " + format(sum3, '<10.4f'))



#lab 4-4
#type으로 마름모꼴 그리기 
type = input("Enter the type: ")
rows = eval(input("Enter the number of rows: "))
line = 1
n = 1
while line <= rows:
	print(" " * (rows - line) + type * (line * 2 - 1) + " " * (rows - line))
	line += 1
while line > 2*rows: # line의 마지막을 정해서 무한 루프 없애기
        if n <= rows:
                print(" " * (line - rows)  + type * ((line - 2 * n) * 2 - 1) + " " * (line - rows))
                line += 1
                n += 1


#lab 4-5
#점점 작아지는 사각형 그림그리기
import turtle
x = -100
y = 100
while x < 0 and y > 0 :
        turtle.penup()
        turtle.goto(x, y)
        turtle.pendown()
        for side in range(4):
                turtle.backward(2 * x)
                turtle.right(90)
        x += 10
        y -= 10
        continue
turtle.hideturtle()
turtle.done()
