#string : group of characters 

s = "Python Programming" 
print(s)                                              
print(len(s))                                         
print(s.capitalize())                                     #(Capitalizes the first letter)
print(s.casefold())                                       #(Converts to lowercase, handles more characters than lower())
print(s.center())                                         #(Centers the string in a field of 30 spaces)
print(s.endswith("ng"))                                   #(Checks if the string ends with "ng")
print(s.count("p"))                                       #(Counts the occurrences of "p")
print(s.find("P",2))                                      #(Finds the index of "P" starting from index 2)
print(s.index("y"))                                       #(Finds the index of "y")
print(s.lower())                                          #(Converts to lowercase)
print(s.upper())                                          #(Converts to uppercase)
print(s.isalnum())                                        #(Checks if the string is alphanumeric)
print(s.isalpha())                                        #(Checks if the string is alphabetic)
print(s.replace("P","A"))                                 #(Replaces "P" with "A")
print(s.swapcase())                                       #(Swaps the case of each character)
print(s.title())                                          #(Capitalizes the first letter of each word)
