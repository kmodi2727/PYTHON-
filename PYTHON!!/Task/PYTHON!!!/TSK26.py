def patr():
    for i in range (1,6):
        print(" "*(6-i)," *"*i)


def prm():
    n=int(input("PLEASE ENTER YOUR NUMBER : "))
    prime = 0
    for i in range(1,n+1):
    
     if n%1==0:
         prime = prime+1

     if n ==2:
        print(n,"IT IS PRIME NUMBER!!")

    else:
        print(n,"IT IS NOT PRIME NUMBER!!")


def fact():
    n=int(input("PLEASE ENTER YOUR NUMBER : "))
    fac=1
    i=1

    while(i<=n):
        fac=fac*i
        i=i+1

    print("YOUR FACTORIAL IS : ",fac)


while True: 

    menu = """

CLICK 1 TO WATCH PATTERN!!!
CLICK 2 TO WATCH PRIME NUMBER!!!
CLICK 3 TO WATCH FACTORIAL!!!
CLICK 4 TO EXIT!!!
AND IF YOU PRESS ANY KEY IT WILL EXIT AUTOMATIC!!!
"""
    print(menu)
    choice=int(input("ENTER YOUR NUMBER : "))

    if choice==1:
        patr()

    elif choice == 2:
        prm()

    elif choice == 3:
        fact()

    elif choice == 4:
        print("THANK YOU FOR VISITING!!!")
        break 

    else: 
        break