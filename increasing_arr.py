n=int(input())
lst=list(map(int,input().split()))
i=1
total=0
while i<len(lst):
	if lst[i]<lst[i-1]:
		total+=lst[i-1]-lst[i]
		lst[i]=lst[i-1]
	i+=1
print(total)
