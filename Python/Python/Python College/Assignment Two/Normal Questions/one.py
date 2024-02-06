#Program to take a string, and if it starts with “a” or “A”, print it as a “valid input”
str=input("Enter the string :\n")
if str.lower().startswith("a"):
    print("Valid input \n")
else:
    print("Not valid input \n")