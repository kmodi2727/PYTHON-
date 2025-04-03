import pymysql

mydb = pymysql.connect(host="localhost",user="root",password="")
mycursor = mydb.cursor()

mycursor.execute("create database if not exists page")
mydb.commit()

mydb = pymysql.connect(host="localhost",user="root",password="",database="page")
mycursor = mydb.cursor()

mycursor.execute("create table if not exists login(id int primary key auto_increment,email varchar(60),password varchar(60))")
mydb.commit()
