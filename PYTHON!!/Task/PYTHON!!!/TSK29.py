def kar2():
    n=int(input("ENTER A NUMBER : "))
    fac = 1

    for i in range(1,n+1):
        fac*=i


    return fac
    


print("YOUR FACTORIAL IS : ",kar2())