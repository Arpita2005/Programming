#Program to take 3 angles from the user and print whether they are valid to make a triangle or not
first=float(input("Enter the first angel:\n"))
second=float(input("Enter the second angel:\n"))
third=float(input("Enter the third angel:\n"))
if((first+second+third)==180):
    print("It is a triangle \n")
else:
    print("It is not a triangle \n")