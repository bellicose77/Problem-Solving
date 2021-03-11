n=int(input())

if(n==2):
    print("YES")
else:
    flag=0
    for i in range(2,n,1):
        if(n%i==0):
            flag=1
            break
    if(flag==0):
        print("YES")
    else:
        print("NO")