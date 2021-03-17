def digit(n):
    if n==0:
        print(0)
    else:
        l=[]
        while n!=0:

            x=n%10
            l.append(x)
            n=n//10

    for i in l:
        print(i,end=" ")
    print()

t=int(input())
while t!=0:
    n = int(input())

    digit(n)
    t -= 1




