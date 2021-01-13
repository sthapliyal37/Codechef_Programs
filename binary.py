
def count_changes(string,n):
	count=0
	sum_s=0
#for i in range(n):
#	sum_s+=int(string[i])
	x=int(string,2)
	sum_s=int(bin(x).count('1'))
	if(sum_s==0):
		count=(len(string)/n)
	
	elif(sum_s!=len(string)):
		p=string[0:n]
		x=int(p,2)
		sum_s=int(bin(x).count('1'))
		if(sum_s==0):
			count+=1
			sum_s=1
			string=string[:n-1] + '1' +string[n:]
	
		for i in range(n-1,len(string)-1):
			sum_s-=int(string[i-n+1])
			sum_s+=int(string[i+1])
			if(sum_s==0):
				count+=1
				sum_s=1
				string=string[:i+1] + '1' +string[i+2:]


	print(count)
    





#driver Function
string="00100"
n=2
count_changes(string,n)


