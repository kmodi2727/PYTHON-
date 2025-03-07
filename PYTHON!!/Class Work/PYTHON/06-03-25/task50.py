try:
    l =[56,24,30,50]

    n=int(input("ENTER INDEX NUMBER : "))

    print("VALUE IS : ",l[n])

except ValueError as e:
    print(e)

except IndexError as e :
    print(e)

    