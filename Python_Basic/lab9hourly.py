#lab9 hourly employee class
from lab9employee import Employee

class hourlyEmployee(Employee):
	def __init__(self,name,tel,wageRate, hours):
		super().__init__(name,tel)
		self.__wageRate = wageRate
		self.__hours = hours
	def getRate(self):
		return self.__wageRate
	def getHours(self):
		return self.__hours
	def setRate(self, wageRate):
		self.__wageRate = wageRate
	def setHours(self, hours):
		self.__hours = hours
	def printHourlySalaryInfo(self):
		self.__hourNetpay = self.__hours * self.__wageRate
		self.setNetpay(self.__hourNetpay)
		print("Hours Worked : " + str(self.__hours) + "\n" + "Rate : " + str(self.__wageRate) + "\n" + "Pay : " + str(self.__hourNetpay))

#lab9 monthly employee class
class monthlyEmployee(Employee):
	def __init__(self,name,tel, salary, engagement):
		super().__init__(name,tel)
		self.__salary = salary
		self.__engagement = engagement
	def getsalary(self):
		return self.__salary
	def getengagement(self):
		return self.__engagement
	def setsalary(self, salary):
		self.__salary = salary
	def setengagement(self,engagement):
		self.__engagement = engagement
	def printMonthlySalaryInfo(self): 
		self.__monthNetpay = self.__salary
		self.setNetpay = self.__monthNetpay
		print("Engagement year : " + str(self.__engagement) + "\n"+ "Pay : " + str(self.__monthNetpay))

