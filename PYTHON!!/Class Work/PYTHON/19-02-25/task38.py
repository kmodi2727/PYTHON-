l = []
n=int(input("ENTER LENGTH OF LIST : "))

for i in range(1,n+1):
    n1 = int(input("ENTER NUMBERS : "))

    l.append(n1)

l.sort()

print("smallest : ",l[0])
print("largest : ",l[-1])
print("second largest : ",l[-2])
