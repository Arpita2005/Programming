# 10. Program to print the memory location of any variable
a = 4
b = 4
loc_a = id(a)  # The id() function in Python returns the identity (memory address) of an object
loc_b= id(b)
print("The memory location of the variable a is:", loc_a)
print("The memory location of the variable b is:", loc_b)