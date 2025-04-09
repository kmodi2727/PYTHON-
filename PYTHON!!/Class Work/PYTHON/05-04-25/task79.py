from tkinter import *

def login():
    root = Tk()
    root.geometry("500x500")
    root.title("LOGIN FORM")

    email = Label(root,text="Email",font=("Calibri",16,"bold"))
    email.place(x=50,y=50)

    password = Label(root,text="Password",font=("Calibri",16,"bold"))
    password.place(x=50,y=110)

    eemail = Entry(root,bg="blue")
    eemail.place(x=280,y=60)

    epassword = Entry(root,bg="blue")
    epassword.place(x=280,y=120)

    login = Button(root,text="Login",font=("calibri",18,"italic"),fg="blue")
    login.place(x=210,y=180)

    root.mainloop()