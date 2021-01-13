from functools import reduce


#function to calculate nCr 
def nCr(n,k):
        numer = reduce(lambda x, y: x * y, list(range(n, n - k, -1)))	#using reduce and lambda function to calculate numer 
        denom = reduce(lambda x, y: x * y, list(range(1, k + 1)))		
        return numer // denom		#  denom root of numer will be the final result

#driver Function
k=6		#value of k
r = int((nCr(k+10,10)+nCr(k+9,9)-2-10*k))		# calculating r using function call
print(r%(1000000000+7))		#final result

