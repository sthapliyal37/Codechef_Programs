q=int(input())
while q!=0:
    q-=1
    x,t=map(int,input().split())
    dis= (x*t*60)/2
    print(int(dis))
