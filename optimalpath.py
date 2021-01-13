
def Dijkstra(matrix,n,m):
	length=[0]*n*m
	parent=[]
	for i in range(n):
		lst=[]		
		for j in range(m):
			lst.append



n,m=map(int,raw_input().split())
matrix=[]
for i in range(n):
	lst=[]
	lst=map(int,raw_input().split())
	matrix.append(lst)
print(Dijkstra(matrix,n,m))
