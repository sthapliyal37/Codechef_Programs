lst1=map(str,raw_input().split())
lst2=map(str,raw_input().split())
lst=lst1+lst2
for i in range (len(lst)-1):
	for j in range(i+1,len(lst)):
		if(lst[j].isdigit()==True and lst[i].isdigit()==False):
			lst[j],lst[i]=lst[i],lst[j]
print(lst)

