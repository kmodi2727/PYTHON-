d = {1:"hello",2:"why",3:"HELLO"}
print(d)

print(d.get(1))                  #to get values 
print(d.items())                 #to get key-value pairs
print(d.keys())                  #to only get keys 
print(d.values())                #to get only values 
d.update({4:"vikram",5:"karan"})       #to add key and values both
print(d)
d.pop(3)                          #to remove key with value 
print(d)
d.popitem()                       #to remove key and values both  
print(d)



t = (1,2,3,4)
d1 = {}

print(d1.fromkeys(t,"karan"))
