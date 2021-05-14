#lab10.py - solving again
#lab10_dic.txt를 열어서 한줄씩 보며
#S, F, D 순서대로 list를 만들고
#영어와 대치되도록 dictionary에 저장
def main():
	file = open("lab10_dic.txt", "r")
	dict1 = dict()
	while True:
		line = file.readline()
		if not line:
			break
		words = line.split()
		list1 = []
		if words == []: #newline의 경우
			continue
		for x in words:
			if "S" in x:
				list1.insert(0,x)
			elif "F" in x:
				list1.insert(1,x)
			elif "D" in x:
				list1.insert(2,x)
		dict1[words[0]]=list1
	for key in dict1:
		print(key + ":" + str(dict1[key]))
	file.close()
main()
