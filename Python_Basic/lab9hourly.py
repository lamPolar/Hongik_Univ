from lab9employee import Employee

#lab9 hourly employee class
#employee를 상속한 시급제 직원 class
class hourlyEmployee(Employee):
	def __init__(self,name,tel,wageRate, hours):
		super().__init__(name,tel)
		self.__wageRate = wageRate #시급
		self.__hours = hours #일한 시간
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
#employee를 상속한 월급제 직원 class
class monthlyEmployee(Employee):
	def __init__(self,name,tel, salary, engagement):
		super().__init__(name,tel)
		self.__salary = salary #월급
		self.__engagement = engagement #계약 기간
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
		self.setNetpay(self.__monthNetpay) #함수사용으로 수정
		print("Engagement year : " + str(self.__engagement) + "\n"+ "Pay : " + str(self.__monthNetpay))
