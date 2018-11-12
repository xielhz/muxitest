lis = []
second_lis = []
n = input()
x = 0
for num in range(0,int(n)):
	lis.append( input())
for num in lis:
	print(num)
	second_lis.append(int(num)//10)
print(second_lis)
for num in second_lis:
	x = x+num
print(x)

