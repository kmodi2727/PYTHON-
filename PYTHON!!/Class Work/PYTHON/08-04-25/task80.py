# file = open("E:\\BACK-END\\PYTHON!!\\Class Work\\PYTHON\\task1.txt","w")
# file.write("HELLO WRITE METHOD!!")
# file.close()

# file = open("E:\BACK-END\PYTHON!!\Class Work\PYTHON\\task1.txt","a")
# file.write("\nHELLO append method1!!")
# file.close()

# file = open("E:\BACK-END\PYTHON!!\Class Work\PYTHON\\task1.txt","r")
# print(file.read())
# file.close()

file = open("E:\\BACK-END\\PYTHON!!\\Class Work\\PYTHON\\task1.txt","w+")
file.write("Hello write plus method")
print(file.tell())
file.seek(0)
print(file.read())
file.close()