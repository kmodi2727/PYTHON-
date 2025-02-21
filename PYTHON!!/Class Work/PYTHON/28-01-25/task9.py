print("PRESS 1 FOR MANAGER")
print("PRESS 2 FOR COUSTOMER")

choice = int(input("ENTER CHOICE : "))

if choice == 1:
    print("WELCOME TO MANAGER DEPARTMENT")

    choice1 = int(input("PRESS 1 FOR ADD PRODUCTS : "))

    if choice1==1:
        name = input("ENTER NAME OF THE PRODUCT : ")
        price = int(input("ENTER PRICE : "))
        qty = int(input("ENTER QTY : "))

        print("PRODUCT ADDED SUCCESSFULLY")

        choice3 = int(input("PRESS 3 FOR PURCHASE PRODUCT"))

        if choice3==3:
           qty1 = int(input("ENTER QUANTITY : "))

           if qty1<qty:
               print("PRICE FOR PRODUCT IS : ",price)

               print("TOTAL BILL IS : ",price*qty1)

           else:
               print("OUT OF STOCK")
        else:
            print("INVALID CHOICE")
    else:
        print("INVALID CHOICE")
else:
    print("INVALID CHOICE")