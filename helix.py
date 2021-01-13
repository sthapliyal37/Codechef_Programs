substrings=[]

def allSubstrings(string,n):
		for l in range(1,n+1):
			substrings.append(string[:l])

n=int(input())
i=0
while i<n:
    i+=1
    x=raw_input()
    allSubstrings(x,len(x))
if(len(substrings)==len(set(substrings))):
	print("ALL IZZ WELL")
else:
	print("OH SHIT")
