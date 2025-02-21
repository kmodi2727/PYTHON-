import random 

original = random.randint(1001,9999)

d={}

while True: 
    menu = """
    PRESS 1 FOR SIGNUP!!
    PRESS 2 FOR LOGIN!!
    PRESS 3 FOR FORGOT PASSWORD!!
    PRESS 4 FOR EXIT!!
"""
    print(menu)

    choice = int(input("ENTER CHOICE : "))

    if choice==1:
        print("*"*30,"WELCOME TO SIGNUP PAGE","*"*30)
        name = input("ENTER NAME : ")
        email = input("ENTER EMAIL : ")
        mobile = int(input("ENTER MOBILE NUMBER : "))
        password = int(input("ENTER PASSWORD : "))
        cpassword = int(input("ENTER CONFIRM PASSWORD : "))

        if password==cpassword:
            print("SIGNUP SUCCESSFULLY!!")

            d['name']=name
            d['email']=email
            d['mobile']=mobile
            d['password']=password

        else:
            print("PASSWORD AND CONFIRM PASSWORD DOESN'T MATCH")


    elif choice==2:
        print("*"*30,"WELCOME TO LOGIN PAGE","*"*30)
        email=input("ENTER EMAIL : ")
        password=int(input("ENTER PASSWORD : "))
        
        if email==d['email']:
            if password==d['password']:
                print("LOGIN SUCCESSFULLY!!")
                break
            else:
                print("PASSWORD DOESN'T MATCH")

        else:
            print("EMAIL DOESN'T MATCH")

    elif choice==3:
        mobile = int(input("ENTER YOUR MOBILE NUMBER : "))
        if d['mobile']==mobile:
            print("YOUR OTP IS : ",original)

            otp = int(input("ENTER OTP : "))

            if otp== original:
                password=int(input("ENTER NEW PASSWORD : "))

                d['password']=password

            else:
                print("INVALID OTP")

        else:
            print("INVALID MOBILE NUMBER")


    elif choice==4:
        print("THANK YOU!!")
        break

    else:
        print("INVALID CHOICE!!")
        break


