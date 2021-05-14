#lab7-1 Hey Jude

song = "Hey Jude, don't make it bad Take a sad song and make it better Remember to let her into your heart Then you can start to make it better"

#1. song을 단어 단위로 resverse해서 print
list1 = song.split()
list1.reverse()
#solving again
print(" ".join(list1))

"""num = len(list1)
for i in range(0,num):
	print(list1[i], end = ' ')"""

#2. song에 있는 알파벳 세기
song.lower()
list2 = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
print('\n')
for alpha in list2:
	alphanum = song.count(alpha)
	print(alpha, 'count is', alphanum)
