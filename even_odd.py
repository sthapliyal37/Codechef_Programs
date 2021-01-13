from itertools import product
def my_func():
    return 0
def calculation(n):
    sum_s=0
    for i in range(len(n)):
        sum_s=sum_s+int(n[i])
    return sum_s
        
lower,upper=map(int,input().split())

k=int(input())
lst=[]
my_func()
for i in range(lower,upper+1):
    lst.append(str(i))
result= my_func()
mod=1000000007
my_arr=product(lst,repeat=k)

for i in my_arr:
    if (calculation(i)%2==0):
        result+=1
print(result%mod)

#Code By Karan Bhakuni
