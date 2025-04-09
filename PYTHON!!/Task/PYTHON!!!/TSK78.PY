from tkinter import *
from tsk79 import *
root = Tk()
root.geometry("500x500")
root.title("SIGNUP FORM!!")

name = Label(root,text="FULL NAME",font=("Calibri",20,"bold"))
name.place(x=50,y=50)
email = Label(root,text="EMAIL",font=("Calibri",20,"bold"))
email.place(x=50,y=100)
password = Label(root,text="PASSWORD",font=("Calibri",20,"bold"))
password.place(x=50,y=150)
cpassword = Label(root,text="CPASSWORD",font=("Calibri",20,"bold"))
cpassword.place(x=50,y=200)

ename = Entry(root,bg="pink")
ename.place(x=300,y=50)
eemail = Entry(root,bg="blue")
eemail.place(x=300,y=100)
epassword = Entry(root,bg="red")
epassword.place(x=300,y=150)
ecpassword = Entry(root,bg="green")
ecpassword.place(x=300,y=200)

insert = Button(root,text="INSERT",font=("Calibri",20,"bold"),fg="yellow")
insert.place(x=50,y=320)
update = Button(root,text="UPDATE",font=("Calibri",20,"bold"),fg="yellow")
update.place(x=150,y=320)
delete = Button(root,text="DELETE",font=("Calibri",20,"bold"),fg="yellow")
delete.place(x=200,y=320)
login = Button(root,text="LOGIN",font=("Calibri",20,"bold"),fg="yellow",command=login)
delete.place(x=250,y=320)

root.mainloop()