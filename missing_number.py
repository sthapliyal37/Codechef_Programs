n=int(input())
total=int((n*(n+1))/2)
lst=map(int,input().split())
print(total-sum(lst))
