import pymysql

mydb = pymysql.connect(host="localhost",user="root",password="")
mycursor = mydb.cursor()

mycursor.execute("create database if not exists Python")
mydb.commit()

mydb = pymysql.connect(host="localhost",user="root",password="",database="Python")
mycursor = mydb.cursor()

mycursor.execute("create table if not exists class(id int primary key auto_increment,name varchar(50),subject varchar(50))")
mydb.commit