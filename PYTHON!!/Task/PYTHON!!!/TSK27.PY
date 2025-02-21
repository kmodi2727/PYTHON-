def kar(n):
    
    user = 0
    while(n!=0):
        digit = n%10
        user = user*10+digit
        n//=10

    print("REVERSE OF YOUR NUMBER IS : ",user)

n=int(input("ENTER YOUR NUMBER : "))


kar(n)