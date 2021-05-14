#lab10.py

def main():
	file = open("c:\lab10\dic.txt", "r")
	for line in file:
		string = file.readline()
		words = string.split()
		list1 = []
		dict = {}
		for x in words:
			if S in words[x]:
				words[x].insert(list1)
			elif F in words[x]:
				words[x].insert(list1[1])
			elif D in words[x]:
				words[x].inser(list1[2])
		dict[word[0]:list1]
	for key in dict:
		print(key + ":" + str(dict[key]))

	file.close()
main()
1


	
