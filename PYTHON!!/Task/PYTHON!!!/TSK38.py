l = []
n = int(input("ENTER LENGTH FOR YOUR LIST : "))

for i in range(1,n+1):
    n1 = int(input("ENTER NUMBERS: "))

    l.append(n1)

l.sort()

print("SMALLEST NUMBER IS : ",l[0])
print("BIGGEST NUMBER : ",l[-1])
print("SECOND LARGEST NUMBER : ",l[-2])
