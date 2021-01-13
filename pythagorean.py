n,m=map(int,raw_input().split())
for i in range(0,n/2):
    for j in range(0,((m-3)/2)-3*i):
        print("-", ss=' ')
    for k in range(-1,3*i):
        print(".|.")
    for j in range(0,((m-3)/2)-3*i):
        print("-")        
