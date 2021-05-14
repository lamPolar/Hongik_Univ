#lab6 class
#rectangular class생성
#가로, 세로, 넓이를 return가능
class rectangular:
	def __init__(self, width=10, height=10):
		#__width,__height로 private 변수생성
		self.__width = width 
		self.__height = height

	def Getwidth(self):
		return self.__width

	def Getheight(self):
		return self.__height

	def Setwidth(self,width):
		self.__width = width

	def Setheight(self,height):
		self.__height = height

	def Getarea(self):
		return self.__width * self.__height
