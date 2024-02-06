#Program to check if the inputted number is positive, negative or zero
num=int(input("Enter a number :\n"))
if(num>0):
    print("It is a positive number \n")
elif(num<0):
    print("It is a negative number \n")
elif(num==0):
    print("It is 0 \n")
else:
    print("Please enter a valid number \n")