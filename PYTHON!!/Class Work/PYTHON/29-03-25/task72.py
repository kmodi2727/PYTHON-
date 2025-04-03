from task71 import *

while True:
    menu = """
    PRESS 1 FOR INSERT DATA 
    PRESS 2 FOR UPDATE DATA 
    PRESS 3 FOR DELETE DATA 
    PRESS 4 FOR FETCH DATA 
    PRESS 5 FOR EXIT 
    """
    print(menu)
    choice = int(input("ENTER CHOICE : "))

    if choice==1:
        email = input("ENTER EMAIL : ")
        password = input("ENTER PASSWORD : ")
        query = "insert into login(email,password) values('%s','%s')"
        args = (email,password)
        mycursor.execute(query%args)
        mydb.commit()
        print("DATA INSERTED SUCCESSFULLY!!")

    elif choice==2:
        id = int(input("ENTER ID FOR UPDATE DATA : "))
        email = input("ENTER EMAIL FOR UPDATE : ")
        password=input("ENTER PASSWORD FOR UPDATE : ")

        query= "update person set email='%s',password='%s'where id ='%s'"
        args = (email,password,id)
        mycursor.execute(query%args)
        mydb.commit()
        print("DATA UPDATED SUCCESSFULLY!!")

    elif choice==3:
        id = int(input("ENTER ID FOR DELETE : "))
        query="delete from person where id='%s'"
        args=(id)
        mycursor.execute(query%args)
        mydb.commit()
        print("DATA DELETED SUCCESSFULLY!!")

    elif choice==4:
        query="select * from login"
        mycursor.execute(query)
        data = mycursor.fetchall()
        print(data)
    elif choice==5:
        print("THANK YOU!!")
        break
    
    else:
        print("INVALID CHOICE!!")
        break
