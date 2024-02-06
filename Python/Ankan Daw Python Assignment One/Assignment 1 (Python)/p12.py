# 12. Program to print ASCII code for inputted character

input_char = input("Enter a character: ")
"""Convert the inputted character to its ASCII code using the ord() function
ord() function is used to get the ASCII value of a character."""
ascii_code = ord(input_char)
print("The ASCII code of the entered character is:", ascii_code)