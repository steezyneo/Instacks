n = int(input())
a = []

for i in range(0, n):
    elements = input().split()  
    for element in elements:
        a.append(int(element))
    
r = int(input())

x = []
while r != 0:
    x.append(a.pop())
    r -= 1

x.reverse()

print(x+a)
