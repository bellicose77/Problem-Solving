def width(n,h):
    sum=0
    for i in range(1,n+1,1):
        x=input().split()
        y=int(x)
        if(y<=h):
            sum+=1
        else:
            sum+=2
    return sum
n,h=map(int,input().split())
result=width(n,h)
print(result)