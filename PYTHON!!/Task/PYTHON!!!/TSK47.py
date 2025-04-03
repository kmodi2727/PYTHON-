import random
l=["STONE","PAPER","SCISSOR"]
computer = random.choice(l)

while True:
    menu = """
    PRESS S FOR STONE 
    PRESS P FOR PAPER
    PRESS C FOR SCISSOR 
"""
    print(menu)
    choice = input("ENTER A VALID CHOICE : ")

    if computer=="STONE" and choice=="S":
        print("computer wins") 
    elif computer=="PAPER" and choice=="P":
        print("computer wins")
    elif computer==choice:
        print("USER WINS!!")
    else:
        print("computer wins ")
        