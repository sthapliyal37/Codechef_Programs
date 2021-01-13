
def maximumMagicalBits(n,x,lst):
	p=0			#variable for counting number of elements in final list 
	for i in range(n):					
  		if x!=0 and lst[i]%2==0:	#if number is even make it odd if we can perform action
    		x-=1					#only odd numbers have lsb set
     		p+=1		
  		elif lst[i]%2!=0: 			#if number is odd lsb is already set
     		p+=1
	print(p)					#print final result



#driver Function
n,x=5,3	# n is size of array and x is number  of maximum modification can be done on the array
lst=[3,7,6,6,3]		#list of elements
maximumMagicalBits(n,x,lst) #Function call

