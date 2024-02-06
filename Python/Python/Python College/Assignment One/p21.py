#Program to take perpendicular and base of a triangle from user and print it’s hypotenuse. 
import math
perpendicular=float(input("Enter the value :\n"))
base=float((input("Enter the value :\n")))
print("The hypotenuse is :",round((math.sqrt(perpendicular**2+base**2)),3))

#  the real formula is perpen^2+base^2=hypo^2...........So to get the real value we are using the sqrt function     