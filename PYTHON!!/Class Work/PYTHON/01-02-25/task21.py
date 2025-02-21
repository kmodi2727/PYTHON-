
evcount = 0
odcount = 0
evsum = 0
odsum = 0
sum = 0

for i in range(5):
    n = int(input("ENETR YOUR NUMBER : "))
    
    if n%2==0:
     print(n,"IS EVEN")
     evcount = evcount+1
     evsum = evsum+n

    else:
     print(n,"IS ODD")
     odcount = odcount+1
     odsum = odcount+n
     sum = sum+n

    sum +=n

print("EVEN COUNT : ",evcount)
print("ODD COUNT : ",odcount)
print("EVEN sum : ",evcount)
print("ODD sum : ",odcount)
print("total sum : ",sum)