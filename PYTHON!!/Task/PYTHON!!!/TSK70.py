from tsk69 import *

mydb = pymysql.connect(host="localhost",user="root",password="",database="Python")
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
    choice = int(input("PLEASE ENTER YOUR CHOICE!! : "))

    if choice==1:
        name = input("ENTER NAME TO ADD : ")
        subject = input("ENTER THE SUBJECT TO ADD : ")

        query = "insert into class(name,subject) values('%s','%s')"
        args=(name,subject)
        mycursor.execute(query%args)
        mydb.commit()
        print("DATA ADDED SUCCESSFULLY!!")

    elif choice==2:
        id = int(input("PLEASE ENTER ID FOR UPDATE DATA : "))
        name = input("PLEASE ENTER NAME FOR UPDTE DATA : ")
        subject = input("PLEASE ENTER SUBJECT FOR UPDATE : ")

        query="update class set name='%s',subject='%s'where id ='%s'"
        args=(name,subject,id)
        mycursor.execute((query%args))
        mydb.commit()
        print("DATA UPDATED SUCCESSFULY!!")

    elif choice==3:
        id = int(input("ENTER ID TO DELETE : "))
        query="delete from class where id = '%s'"
        args=(id)
        mycursor.execute(query%args)
        mydb.commit()
        print("DATA DELETED SUCCESSFULLY!!")

    elif choice==4:
        query="select * from class"
        mycursor.execute(query)
        data = mycursor.fetchall()
        print(data)

    elif choice==5:
        print("THANK YOU!!")
        break
    else:
        print("INVALID CHOICE!!")
        break



    