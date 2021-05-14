#lab8-1
def same(list):
	for i in range(len(list)-1,-1,-1):
		for k in range(len(list)-1,-1,-1):
			if list[i] == list[k]:
				list.remove(list[i])
				continue
	return list

numbers = input("enter the numbers: ")
list = [x for x in numbers]
list = same(list)

print('The distinct numbers are', list[0:len(list)])

#lab8-2
def merge(list1,list2):
	m = 0
	n = 0
	list3 = [ ]
	while m < len(list1) and n < len(list2) :
		if list1[m] <= list2[n]:
			list3.append(list1[m])
			m += 1
		else :
			list3.append(list2[n])
			n += 1	
	return list3

list1 = input("enter the list1: ")
list1 = [x for x in list1]
list2 = input("enter the list2: ")
list2 = [x for x in list2]

list1.sort()
list2.sort()

list3 = merge(list1,list2)

print('the merged list is ', list3[0:len(list3)])
