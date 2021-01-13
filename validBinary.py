string=str(raw_input())
n=int(input())

flag=True
flag_1=False
count=0
x=1

for i in range(0,len(string)-n+1):
    	flag_1=False
    	for j in range(i,i+n):
        	if(string[j]=='1'):
        	    flag_1=True        
        	    break
    	if(flag==True and flag_1==False):
        	count+=1
		i+=n-1
        	flag=False
        	x=1
    	if(x==n):
        	flag=True
    	x+=1


print(count)
    
