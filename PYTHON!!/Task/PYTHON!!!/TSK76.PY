import tkinter as tk

root = tk.Tk()

root.geometry("500x500")
root.title("SIGNUP FORM")

name = tk.Label(root,name="name",text="NAME",font=("Serif",20,"bold"))
name.place(x=50,y=50)

name = tk.Label(root,name="address",text="ADDRESS",font=("Serif",20,"bold"))
name.place(x=50,y=100)

name = tk.Label(root,name="email",text="EMAIL",font=("serif",20,"bold"))
name.place(x=50,y=150)

root.mainloop()

