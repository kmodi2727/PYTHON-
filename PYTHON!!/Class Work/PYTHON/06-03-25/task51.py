try:
    n1=int(input("ENTER YOUR NUMBER 1: "))
    n2=int(input("ENTER YOUR NUMBER 2: "))

    print("DIVISION : ",n1/n2)

except ValueError as e:
    print(e)

except ZeroDivisionError as e:
    print(e)

