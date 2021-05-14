#lab5-1
#섭씨 -> 화씨, 화씨-> 섭씨
#함수를 이용해서 구하기
def celtofah(cel):
	fah = (9.0 / 5.0) * cel + 32
	return fah
def fahtocel(fah):
	cel = (5.0 / 9.0) * (fah - 32)
	return cel

cel = 40.0
fah = 120.0
print('Celsius'+10*' '+ 'Fahrenheit')
for i in range(0,10): #40도부터 30도까지
	print(cel , 10 * ' ', celtofah(cel))
	cel -= 1.0

print('Fahrenhiet' + 10 * ' ' + 'Celsius')
for i in range(0,10): #120도부터 210도까지
	print(fah, 10 * ' ', fahtocel(fah))
	fah -= 10.0

#lab 5-2
#두 수가 주어졌을 때, 가로 세로라고 생각하고 사각형 넓이 구하기
import math
def area(n1, n2):
	area = n1 * n2
	return area
#두수가 주어졌을 때, 작은 수를 반지름이라고 생각하고 원의 넓의 구하기
def circle(n1, n2):
	if n1 < n2:
		circle = (n1 ** 2) * math.pi
	else :
		circle = (n2 ** 2) * math.pi
	return circle
#각각 사각형과 원의 넓이를 구해서 프린트
def main2(n1, n2):
        arearectangular = area(n1, n2)
        circlearea = circle(n1, n2)
        print("The area of rectangular is: ", arearectangular)
        print("The area of circle is: ", circlearea)

n1 = eval(input("Enter the number1: "))
n2 = eval(input("Enter the number2: "))

main2(n1, n2)



#lab 5-3
#랜덤숫자 guessing하기
import random

def main3():
	computer = random.randint(0,99)
	GuessNumber(computer)

def GuessNumber(computer):
	guesstime = 0
	start = 0
	end = 100
	while guesstime < 100 :
		guess = eval(input("Enter your guess number: "))
		if guess == computer :
			print("Correct :) ")
			break
		elif guess > computer :
			print('Enter between ' , start, ' and ' , guess)
			guesstime += 1
			end = guess
		elif guess < computer :
			print('Enter between ' , guess, ' and ' , end)
			guesstime += 1
			start = guess
main3()
