
n,x=map(int,input().split())
l1=[]
l2=[]
for i in range(1,min(n,x)+1,1):
    if((n%i==0) and (x%i==0)):
        s=i
print(s)
