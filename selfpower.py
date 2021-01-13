def self_power(n):
	sum_s=0
	sum_s=sum(pow(i,i,10**10)for i in range(1,n+1))	
	sum_s=int(str(sum_s)[-10:])
	print(sum_s)        

#driver Function
n=10
self_power(10)


