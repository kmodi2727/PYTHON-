from tkinter import *

def login():
    root = Tk()
    root.geometry("500x500")
    root.title("LOGIN PAGE")

    email = Label(root,text="EMAIL",font=("Calibri",20,"bold"))
    email.place(x=50,y=50)
    password = Label(root,text="PASSWORD",font=("Calibri",20,"bold"))
    password.place(x=50,y=100)

    eemail = Entry(root,bg="yellow")
    eemail.place(x=280,y=60)
    epassword = Entry(root,bg="yellow")
    epassword.place(x=280,y=120)

    login = Button(root,text="LOGIN",font=("Calibri",20,"bold"))
    login.place(x=210,y=180)

    root.mainloop()