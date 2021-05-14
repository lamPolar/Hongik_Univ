#lab3-1
#근의공식 계산
a = eval(input("Enter a: "))
b = eval(input("Enter b: "))
c = eval(input("Enter c: "))

if b ** 2 - 4 * a * c > 0:
	x1 = (- b + (b ** 2 - 4 * a * c) ** 0.5 ) / 2 * a * c
	x2 = (- b + (b ** 2 - 4 * a * c) ** 0.5 ) / 2 * a * c
	print("The answer is " + x1 + " and " + x2)
elif b ** 2 - 4 * a * c == 0:
	x = (- b + (b ** 2 - 4 * a * c) ** 0.5 ) / 2 * a * c
	print("The answer is " + x)
elif b ** 2 - 4 * a * c < 0:
	print("There is no answer")




#lab3-2
#month변환
Month = eval(input("Enter the month: "))
day = eval(input("Enter the day: "))
if Month == 1:
	print("January, ", day )
elif Month == 2:
	print("Fabruary, ", day)
elif Month == 3:
	print("March, ", day)
elif Month == 4:
	print("April, ", day)
elif Month == 5:
	print("May, ", day)
elif Month == 6:
	print("June, ", day)
elif Month == 7:
	print("July, ", day)
elif Month == 8:
	print("August, ", day)
elif Month == 9:
	print("September, ", day)
elif Month == 10:
	print("October, ", day)
elif Month == 11:
	print("November, ", day)
elif Month == 12:
	print("December, ", day)
elif Month > 12 or Month < 1 or day > 31 or day < 1:
	print("It is not exist.")


#lab 3-3
#섭씨 화씨 변환
temperature = eval(input("Enter the temperature: "))
symbol = eval(input("Enter C or F: "))
if not( symbol == "C" or symbol == "c" or symbol == "F" or symbol == "f"):
	print("It is not exist.")
elif symbol == "C" or symbol == "c":
	F_temperature = (9.0/5.0) * temperature + 32
	print("The temperature is " + F_temperature + "F")
elif symbol == 'F' or symbol == 'f':
	C_temperature = (5.0/9.0) * (temperature - 32)
	print("The temperature is " + C_temperature + "c")
