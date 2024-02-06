#Program to take a string, and if it starts with a vowel, print it as a “valid input”
str = input("Enter the String:\n")
if str.lower()[0] in ("a", "e", "i", "o", "u"):
    print("Valid Input\n")
else:
    print("Not valid Input\n")

''' Here at first er are taking a string then convert it to lower case...[0] means it will check what is the first letter of the string...
in is used to check if the extracted character means the first character is present in the provided tuple '''