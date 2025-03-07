import random
l = ["ROCK","PAPER","SCISSOR"]
computer = random.choice(l)

while True:
    menu = """
    press r for rock
    press s for scissor
    press p for paper 
"""
    print(menu)
    choice = input("ENTER A VALID CHOICE : ")

    if computer=="rock" and choice=="s":
        print("computer wins")
    elif computer=="paper"and choice=="r":
        print("computer wins")
    elif computer=="scissor"and choice=="p":
        print("computer wins")
    else:
        print("user wins")