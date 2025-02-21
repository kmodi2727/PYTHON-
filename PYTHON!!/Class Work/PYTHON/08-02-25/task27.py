def fun1(n):          #parameters

    usersum = 0
    while (n!=0):
        digit = n%10
        usersum = usersum*10+digit
        n//=10

    print("REVERSE SUM IS : ",usersum)

n=int(input("ENTER A NUMBER : "))

fun1(n)                 #arguments