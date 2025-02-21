i=1
evcount=0
odcount=0
odsum=0
evsum=0
sum=0
while(i<=5):
    n=int(input("PLEASE ENTER YOUR NUMBER : "))

    if n%2==0:
        print(n,"NUMBER IS EVEN!!")
        evcount=evcount+1
        evsum=evsum+n

    else:
        print(n,"NUMBER IS ODD!!")
        odcount=odcount+1
        odsum=odsum+n
        sum=sum+n

    i=i+1


print("EVEN COUNT : ",evcount)
print("ODD COUNT : ",odcount)
print("EVEN SUM : ",evsum)
print("ODD SUM : ",odsum)
print("TOTAL SUM : ",sum)


