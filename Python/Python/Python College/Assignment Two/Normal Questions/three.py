#Program to take a string, and if it starts and ends with the same character, print it as a “valid input”

str = input("Enter a string :\n")
if(str.lower()[0]==str.lower()[-1]):
    print("Valid Input \n")
else: 
    print("Not Valid Input \n")

#-1 means the last element of any string , -2 means the second last element of a string 