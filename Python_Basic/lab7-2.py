#lab7-2 time class
#clock class 생성
#멤버 변수로 hour, minute가 있고
# addminute분을 더한 시간을 알려주는 add와 , minus0minute분을 뺀 시간을 알려주는 sub
#현재 object의 멤버변수를 return하는 str 함수가 있다.
class clock:
	def __init__(self,hour,minute):
		self.hour = hour
		self.minute = minute

	def __add__(self,addminute):
		if addminute + self.minute >= 60:
			self.hour += 1
			self.minute = addminute + self.minute - 60
		else:
			self.minute = addminute + self.minute
		return clock(self.hour, self.minute)

	def __sub__(self,minusminute=60):
		self.hour -= 1
		return clock(self.hour, self.minute)

	def __str__(self):
		return str(self.hour) + "hours and " + str(self.minute) + "minutes."

def main():
	clock1 = clock(10, 20)
	print(clock1)

	addminute = 90
	print("\nAdd " + str(addminute) + 'minute')
	clock2 = clock1.__add__(addminute)
	print(clock2)

	minusminute = 60
	print('\nMinus ' + str(minusminute) + 'minute')
	clock3 = clock1.__sub__(minusminute)
	print(clock3)

main()
