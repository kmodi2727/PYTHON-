import tkinter as tk 

root = tk.Tk()

root.geometry("500x500")
root.title("signup form")

name = tk.Label(root,name="name",text="NAME",font=("Arial",18,"bold"))
name.place(x=50,y=50)

email = tk.Label(root,name="email",text="EMAIL",font=("Arial",18,"bold"))
email.place(x=50,y=100)

number = tk.Label(root,name="number",text="NUMBER",font=("Arial",18,"bold"))
number.place(x=50,y=150)

root.mainloop()

