try :
    n= int(input("ENTER YOUR NUMBER : "))
    fac=1

    for i in range (1,n+1):
        fac*=i

    print(fac)

except ValueError as e:
    print(e)

else:
    print("ELSE EXECUTED!!")

finally:
    print("FINALLY EXECUTED!!")

