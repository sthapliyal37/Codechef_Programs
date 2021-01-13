import math

def my_fun():
	return 0

def fill_the_cube(arr,n):
	
	count = my_fun()
	for j in range(n):
    		for k in range(n):
        		if arr[j][k] == 'D':
            			count += 1
        return count	

n= int(input())
arr = []
for i in range(n):
	p=list(map(str,input().split()))
    	arr.append(p)
count=fill_the_cube(arr,n)
result = math.floor(math.sqrt(count))

print(result)
#By Siddhant Thapliyal
