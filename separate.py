def splitter(string):
    for i in range(1, len(string)):
        start = string[0:i]
        end = string[i:]
        yield (start, end)
        for split in splitter(end):
            result = [start]
            result.extend(split)
            yield result


tt=input()
s=0
original_sum=0
while s<tt:
	count=0
	s+=1
	string=raw_input()
	combinations = list(splitter(string))
	#print(combinations)
	for i in range(len(combinations)):
		sums=0
		for j in range(len(combinations[i])):
			sums+=int(combinations[i][j])
		if sums>17:
			count+=1
	if(count==len(combinations)):
		original_sum+=2**(s-1)
print(original_sum)


