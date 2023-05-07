#Let's build a calculator
# a + b, a - b, a * b, a / b, a % b .

#Getting numbers and inputs from users
first_number = input("Enter your First Number : ")
operator = input("Enter your Operator +,-,*,/,% :  ")
secound_number = input("Enter your Secound Number : ")

#Changing string to intiger
first_number = int(first_number)
secound_number = int(secound_number)

#building logic

if operator == "+":
    print(" ")
    print("you are doing addition and ")
    print("-------------- Your answer is --------------")
    print (first_number + secound_number)
elif operator == "-":
    print(" ")
    print("you are doing minus and ")
    print("-------------- Your answer is --------------")
    print (first_number - secound_number)
elif operator == "*":
    print(" ")
    print("you are doing multiplication and ")
    print("-------------- Your answer is --------------")
    print (first_number * secound_number)
elif operator == "/":
    print(" ")
    print("you are doing division and ")
    print("-------------- Your answer is --------------")
    print (first_number / secound_number)
elif operator == "%":
    print(" ")
    print("you are doing reminder and ")
    print("-------------- Your answer is --------------")
    print (first_number % secound_number)
else :
    print(" ")
    print("-------------- Your answer is --------------")
    print("Sorry invalid operation")

print(" ") # This is for Gap
print(" Thank You  ...")