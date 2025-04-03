try:
    n1 = int(input("ENTER ANY NUMBER 1 OF YOUR CHOICE : "))
    n2 = int(input("ENTER ANY NUMBER 2 OF YOUR CHOICE : "))

    print("DIVISION OF YOUR NUMBER IS : ",n1/n2)

except ZeroDivisionError as e:
    print(e)

except ValueError as e :
    print(e)

    