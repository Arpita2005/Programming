# In-built function
# 2. Module functions
# 3. Use-Defined functions

#---------------------------------------------------------------------

#inbluild functions
# which function is already have in python we don't have to define it

#Like 
# int()
#str()
#bool() etc.


#--------------------------------------------------------------------

# Module Functions
#When we store related function or related variable in a file it call module

#Math module
import math
print (dir(math))

# when we just need any one variable now we are taking square root
from math import sqrt
print(sqrt(16))

# When we need all of the functions
from math import *  #    * is used to get all of the functions
print(sqrt(16))



#--------------------------------------------------------------------------------------------------------
#--------------------------------------------------------------------------------------------------------

#Functions


# def  function_name (parameters) :
 #   // Do something


# def is useed to define by user
#To calculate sum by user defined function
def cal_sum(first, second):
    print(first + second)

cal_sum (1,5) # in here we called to parameters with cal_sum() wth the same name


# if we want to just give the value and call with one value 
def print_sum (first , second=6) :
    print ( first  + second)

print_sum ( 3)
