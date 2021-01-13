
def minCoins(coins, m, V): 
	
	table = [0 for i in range(V + 1)] 

	table[0] = 0

	for i in range(1, V + 1): 
		table[i] = sys.maxsize 

	for i in range(1, V + 1): 
		
		for j in range(m): 
			if (coins[j] <= i): 
				sub_res = table[i - coins[j]] 
				if (sub_res != sys.maxsize and
					sub_res + 1 < table[i]): 
					table[i] = sub_res + 1
	return table[V] 

# Driver Code 
if __name__ == "__main__": 

	q=int(input())
	while q!=0:
		q=q-1
		S,N=map(int,input().split())
		coins = []
		for i in range(2,N+1,2):
			coins.append(i)
		m = len(coins) 
		print(minCoins(coins, m, S)) 


