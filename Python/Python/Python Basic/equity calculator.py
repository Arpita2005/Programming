"""
Equity calculator

"""
print("========================================================")
print("Equity calculator")
print("========================================================")
print("Made By :")
print("========================================================")
print("Chittajit Chkraborty")
print("========================================================")
print("")


value = float(input("Enter the value as per your company equity percentage : "))
equity = float(input("Enter your equity percentage as per your value : "))
totalvalue = float(input("Enter total equity percent of your company probably 100 percent : "))


"""Changing to the intiger all of this inputs"""
"""value = float(value)
equity = float(equity)
totalvalue = float(totalvalue)"""

"""Calculation of equity"""

onepercent = (value/equity)
hundreadpercent = (onepercent*totalvalue)

"""Changing to string"""


print("1% "+"of company is : " + str(onepercent))
print("Total Valuation of company is : "+str(hundreadpercent))
