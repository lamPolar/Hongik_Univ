#lab7-1 Hey Jude
#1.
song = "Hey Jude, don't make it bad Take a sad song and make it better Remember to let her into your heart Then you can start to make it better"

list1 = song.split()

list1.reverse()

num = len(list1)
for i in range(0,num):
	print(list1[i], end = ' ')


#2.
song.lower()
list3 = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
print('\n')
for alpha in list3:
	alphanum = song.count(alpha)
	print(alpha, 'count is', alphanum)

