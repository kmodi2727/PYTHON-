try:
    l = [25,65,20,52,12]
    n = int(input("ENTER ANY INDEX NUMBER : "))
    print("VALUE IS : ",l[n])

except ValueError as e:
    print(e)

except IndexError as e:
    print(e)

