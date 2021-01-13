import collections
def splitter(string):
    for i in range(1, len(string)):
        start = string[0:i]
        end = string[i:]
        yield (start, end)
        for split in splitter(end):
            result = [start]
            result.extend(split)
            yield result
tt=int(input())
while tt!=0:
	tt-=1
	n,k=int(input())
	lst=map(int,input().split())
	combinations = list(splitter(lst))
	total=999999
	for i in range(len(combinations)):
		freq = collections.Counter(combinations[i])
		count=0 
    		for key, value in freq.iteritems(): 
        		if(value>1)
        			count+=value 
		x=k*len(combination[i]) +count
		if(x<total):
			x=total
	print(total) 
