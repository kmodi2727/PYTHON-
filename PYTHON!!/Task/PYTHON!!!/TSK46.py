import random
original=random.randint
print("*"*10,"WELCOME TO GUESS THE NUMBER GAME :)","*"*10)
while True:

    choice=int(input("ENTER ANY NUMBER : "))
    
    if choice>50:
        print("OOOPPPSSSS INVALID CHOICE!!")
        break
    elif choice==original:
        print("YOU WINNNNNN!!!")
        break
    elif choice>original:
        print(choice,"IS BIGGER THAN THE ORIGINAL!!")
    else:
        print(choice,"IS LESS THAN THE ORIGINAL!!")