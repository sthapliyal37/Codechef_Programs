
lst=[]
def gcd(a,b):
    if(b==0):
        return a
    return gcd(b,a%b)
#storing all results upto 100000 
def Count(l,r):
	for i in range(l,r+1):
        	fx=hex(i)
        	xx=str(fx)
        	c=2
        	sums=0
        	while(c<len(xx)):
        	    if(xx[c]>='0' and xx[c]<='9'):
        	        sums+=int(xx[c])
        	    elif(xx[c]=='A' or xx[c]=='a'):
        	        sums+=10
        	    elif(xx[c]=='B' or xx[c]=='b'):
        	        sums+=11
        	    elif(xx[c]=='C' or xx[c]=='c'):
        	        sums+=12
        	    elif(xx[c]=='D' or xx[c]=='d'):
        	        sums+=13
        	    elif(xx[c]=='E' or xx[c]=='e'):
        	        sums+=14
        	    elif(xx[c]=='F' or xx[c]=='f'):
        	        sums+=15
        	    c+=1
		lst.append(gcd(i,sums))
#counting function
def Check(l,r):    
	count=0
	Count(l,r)
	for i in range(0,len(lst)):
	        sums=0
	        if(lst[i]>1):
	            count+=1
	print(count) 
#driver Function    
l,r=7,12
Check(l,r)





