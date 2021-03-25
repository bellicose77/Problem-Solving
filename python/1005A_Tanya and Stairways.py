n=int(input())
x=list(map(int,input().split()))
l=[]
for i in range(0,len(x)):
    if x[i]==1 and i>0:
        v=x[i-1]
        l.append(v)
l.append(x[len(x)-1])
print(len(l))
for i in l:
    print(i,end=" ")
