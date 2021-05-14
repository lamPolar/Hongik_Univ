#lab8-1
#numbers에 나오는 수들의 중복되지 않는 list
def same(list1):
	for i in range(len(list1)-1,0,-1): #len(list)-1부터 1까지 역순 index
		for k in range(i-1,-1,-1): # i-1 부터 0까지 역순 index
			print("i",i,"k",k)
			if list1[i] == list1[k]:
				list1.remove(list1[i])
				break
	return list

#solving again
def same2(list1):
	return set(list1) #list(set(list1))

numbers = input("enter the numbers: ")
list1 = [x for x in numbers]
list1 = same(list1)
list2 = same1(list1)

print('The distinct numbers are', list1)
#print("again", sorted([*list2, ]))

#lab8-2
#두개의 list를 내부 원소 순서대로 merge
#solving again
"""def merge(list1,list2):
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
	while m < len(list1):
        list3.append(list1[m])
		m+=1
	while n < len(list2):
        list3.append(list2[n])
		n+=1
	return list3"""
def merge2(list1,list2):
	return sorted(list1+list2)

list1 = input("enter the list1: ")
list1 = [x for x in list1]
list2 = input("enter the list2: ")
list2 = [x for x in list2]

list4 = merge2(list1,list2)
print("Again", list4)

"""list1.sort()
list2.sort()
list3 = merge(list1,list2)

print('the merged list is ', list3)
"""
