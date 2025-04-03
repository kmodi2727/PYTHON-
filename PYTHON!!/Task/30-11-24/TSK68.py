import pymysql

mydb = pymysql.connect(host="localhost",user="root",password="")
mycursor= mydb.cursor()

mycursor.execute("create database if not exists toys1")
mydb.commit()

mydb = pymysql.connect(host="localhost",user="root",password="",database="toys1")
mycursor=mydb.cursor()

mycursor.execute("create table if not exists toys1 (id int primary key auto_increment,name varchar(60),subject varchar(60))")
mydb.commit()
