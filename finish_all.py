n=int(input())
m={}
arr=list(map(int,input().split()))
count=0
for i in range(len(arr)):
	if arr[i] in m.keys():
		m[arr[i]]+=1
		if m[arr[i]]%2==1:
			count+=1
	else:
		m[arr[i]]=1
		count+=1
print(count)
