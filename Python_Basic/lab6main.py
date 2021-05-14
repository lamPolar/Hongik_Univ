#lab6 main
from lab6class import rectangular

def main():
	rectangle1 = rectangular()
	print("Rectangle1: ", "Width is", rectangle1.Getwidth(), ", height is", rectangle1.Getheight(), "and area is", rectangle1.Getarea())

	rectangle2 = rectangular(10,20)
	print("Rectangle2: ", "Width is", rectangle2.Getwidth(), ", height is", rectangle2.Getheight(), "and area is", rectangle2.Getarea())

	rectangle3 = rectangular(100,200)
	print("Rectangle3: ", "Width is", rectangle3.Getwidth(), ", height is", rectangle3.Getheight(), "and area is", rectangle3.Getarea())

	#이런식의 호출은 영향없음
	rectangle1.__width = 20
	rectangle2.__height = 10
	print("Rectangle1: ", "New area is", rectangle1.Getarea())
	print("Rectangle2: ", "New area is", rectangle2.Getarea())

main()

# print 결과 :
# Rectangle1:  Width is 10 , height is 10 and area is 100
# Rectangle2:  Width is 10 , height is 20 and area is 200
# Rectangle3:  Width is 100 , height is 200 and area is 20000
# Rectangle1:  New area is 100
# Rectangle2:  New area is 200
