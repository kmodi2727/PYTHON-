l = [10,20,1,1,1.365,1.0234,"hello",True,"why",292939]

print(type(l))
print(l)

l.append(100)             #add in last
print(l)
print(l.count(1))             #count the list 
l.extend([800,900,333])          #add whole list 
l.insert(2,"karan")             #add index and value 
print(l)
l.pop(3)                      #remove index element 
print(l)
l.remove("hello")            #remove particular word
print(l)
