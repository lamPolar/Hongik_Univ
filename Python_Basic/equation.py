class equation:
	def __init__(self, a, b, c):
		self.__a = a
		self.__b = b
		self.__c = c
	def GetA(self):
		return self.__a
	def GetB(self):
		return self.__b
	def GetC(self):
		return self.__c

	def GetDiscriminant(self): #근의 공식 D값의 제곱
		return self.__b ** 2 - 4 * self.__a * self.__c
	def GetRoot1(self):
		return (- self.__b + self.GetDiscriminant() ** 0.5) / 2 * self.__a
	def GetRoot2(self):
		return (- self.__b - self.GetDiscriminant() ** 0.5) / 2 * self.__a


def main():
	eq1 = equation(1, 10, 16)
	print("The answer of eq1 is", eq1.GetRoot1(), " and", eq1.GetRoot2())

	eq2 = equation(5, 3, 10)
	print("The answer of eq2 is", eq2.GetRoot1(), " and", eq2.GetRoot2())


main()
