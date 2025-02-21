def pat1():
     for i in range(1,6):
      print(" "*(6-i)," *"*i)

def prm():
   n= int(input("ENTER YOUR NUMBER : "))
   prime = 0
   for i in range(1,n+1):
  
    if n%i == 0:
     prime = prime + 1
    
   if prime==2:
  
    print(n,"IT IS PRIME!!")

   else:
    print(n,"IT IS NOT PRIME!!")
    



def fac1():
  n=int(input("ENTER YOUR NUMBER : "))

  i=1
  fac=1
  while (i<=n):
    fac=fac*i
    i=i+1

  print("FACTORIAL NUMBER IS : ",fac)


while True:

    menu ="""
press 1 for pattern 
press 2 prime number 
press 3 for factorial number 
press 4 for exit 
"""
    print(menu)
    choice = int(input("ENTER YOUR CHOICE : "))
    
    if choice == 1:
        pat1()

    elif choice == 2:
         prm()

    elif choice == 3:
        fac1()


    elif choice == 4:
        print("thank you!!")
        break
    
    else :
       break 




