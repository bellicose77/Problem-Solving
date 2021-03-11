li=[]
n=int(input())
for i in range(0,n):
    x=int(input().split())
    li.append(x)
li.sort()
v=li.pop()
print(v)

'''other person's code
Numbers = []
A = input()
Numbers = map(int,input().split())
Big = max(Numbers)
print(Big)
'''