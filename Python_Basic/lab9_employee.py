#lab9 class employee
class Employee():
	#name, tel, Netpay : 멤버변수
	#각 변수에 대해 set, get, print : 멤버 함수
	def __init__(self, name, tel, Netpay=0):
		self.__name = name
		self.__tel = tel
		self.__Netpay = Netpay
	def getname(self):
		return self.__name
	def gettelnum(self):
		return self.__tel
	def getNetpay(self):
		return self.__Netpay
	def setname(self, name):
		self.__name = name
	def settelnum(self, tel):
		self.__tel = tel
	def setNetpay(self, Netpay):
		self.__Netpay = Netpay
	def __str__(self):
		return "Name : " + self.__name + "\n" + "Telephone Number : " + self.__tel
	def printSalaryInfo(self):
		if self.__Netpay == 0 :
			print('There is no salary information')
		else :
			print(self.__Netpay)
