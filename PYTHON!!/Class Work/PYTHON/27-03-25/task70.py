from task69 import *

mydb = pymysql.connect(host="localhost",user="root",password="",database="student1")
mycursor = mydb.cursor()

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
        name = input("ENTER NAME : ")
        subject = input("ENTER SUBJECT : ")

        query = "insert into person(name,subject) values('%s','%s')"
        args = (name,subject)
        mycursor.execute(query%args)
        mydb.commit()
        print("DATA INSERTED SUCCESSFULLY!!")

    elif choice==2:
        id = int(input("ENTER ID FOR UPDATE DATA : "))
        name = input("ENTER NAME FOR UPDATE : ")
        subject=input("ENTER SUBJECT FOR UPDATE : ")

        query= "update person set name='%s',subject='%s'where id ='%s'"
        args = (name,subject,id)
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
        query="select * from person"
        mycursor.execute(query)
        data = mycursor.fetchall()
        print(data)

    elif choice==5:
        print("THANK YOU!!")
        break
    
    else:
        print("INVALID CHOICE!!")
        break



