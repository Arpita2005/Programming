'''Program to apply tax
1,12,500+30% for annual salary exceeding 10 Lakh
12,500+20% for annual salary exceeding 5 Lakh
5% for annual salary exceeding 2.5 Lakh
Nil if annual salary under 2.5 Lakh'''

salary=int(input("enter the salary :\n"))
if(salary>1000000):
    salary+=112500+0.3
    print("Your tax is :",salary)
elif(salary>500000):
    salary+=12500+0.2
    print("Your tax is :",salary)
elif(salary>2.50000):
   print