#lab9-main
from lab9hourly import hourlyEmployee
from lab9hourly import monthlyEmployee
from lab9employee import Employee

#class 상속
def main():
	employee = Employee("Park", "010-333-4445")
	hour_E = hourlyEmployee("Lee", "010-111-2340" , 10000, 10)
	month_E = monthlyEmployee("Kim", "010-222-3333" , 100000, 3)

	displayUserInfo(employee)
	employee.printSalaryInfo()
	print("-------------------------------------------------")

	displayUserInfo(hour_E)
	if isinstance(hour_E, hourlyEmployee):
		hour_E.printHourlySalaryInfo()
	print("-------------------------------------------------")

	displayUserInfo(month_E)
	if isinstance(month_E, monthlyEmployee):
		month_E.printMonthlySalaryInfo()
	print("-------------------------------------------------")

	print("Monthly Employee and Hourly Employee per month are same?")
	if (hour_E == month_E) == True:
		print("Yes, two employees' salary are same")
	else:
		print("No, two emplowees' salary are not same")

def displayUserInfo(e):
    print(e.__str__())
main()
