import random
original = random.randint(1,50)
print("*"*10,"welcome to choose the number game","*"*10)
while True:

 choice= int(input("ENTER ANY NUMBER : "))

 if choice>50:
    print("INVALID CHOICE!!")
    break
 elif choice==original:
    print("YOU WIN!!")
    break
 elif choice>original:
    print(choice,"IS GREATER THAN THE NUMBER!!")
 else:
    print(choice,"IS LESS THAN THE NUMBER!!")
