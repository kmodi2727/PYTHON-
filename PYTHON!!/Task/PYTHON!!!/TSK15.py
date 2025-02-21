i=1
evcount=0
odcount=0

while(i<=5):
    n=int(input("ENTER A NUMBER : "))

    if n%2==0:
        print(n,"NUMBER IS EVEN!!")
        evcount=evcount+1

    else :
        print(n,"IT IS ODD NUMBER!!")
        odcount=odcount+1

    i=i+1

print("EVEN COUNT: ",evcount)
print("ODD COUNT: ",odcount)
