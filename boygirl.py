q=int(input())
s=0
while s<q:
	s+=1
	n=int(input())
	boy=sorted(map(int,raw_input().split()))
	girl=sorted(map(int,raw_input().split()))
	lst=[]
	if(boy[0]>girl[0]):	
		for i in range(n):	
			lst.append(girl[i])
			lst.append(boy[i])
	elif(boy[0]<girl[0]):	
		for i in range(n):	
			lst.append(boy[i])
			lst.append(girl[i])	
	else:
		cmnt="all"
		for i in range(n):
			if(boy[i]<girl[i]):
				cmnt="boy"
			elif(girl[i]<boy[i]):
				cmnt="girl"
		if(cmnt=="boy" or cmnt=="all"):
			for i in range(n):	
				lst.append(boy[i])
				lst.append(girl[i])
		elif(cmnt=="girl"):
			for i in range(n):
				lst.append(girl[i])	
				lst.append(boy[i])					
	Flag=True	
	for i in range (len(lst)-1):
		if(lst[i]>lst[i+1]):
			Flag=False
	if(Flag==True):
		print("YES")
	else:
		print("NO")
