n=int(input("ENTER YOUR NUMBER : "))
prime = 0

for i in range(1,n+1):
    
 if n%i == 0:
   prime = prime + 1
    
if prime==2:
  print(n,"IT IS PRIME!!")

else:
  print(n,"IT IS NOT PRIME!!")

    
