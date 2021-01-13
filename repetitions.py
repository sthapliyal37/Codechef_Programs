string=input()
maximum=0
count=1
for i in range(len(string)-1):
	if string[i]==string[i+1]:
		count+=1
	else:
		maximum=max(count,maximum)
		count=1
	#print(count)
print(max(maximum,count))
