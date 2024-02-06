# #Program to assign grade on the basis of marks , 
# grade A if marks >=80, 
# grade B if marks >=60 and <80 , 
# grade C if marks >=50 and <60, 
# otherise garde F

marks=float(input("Enter your marks :\n"))
if(marks>=80):
    print("Grade A\n")
elif((marks>=60)and(marks<80)):
    print("Grade B\n")
elif((marks>=50)and(marks<60)):
    print("Grade C\n")
else:
    print("Grade F")