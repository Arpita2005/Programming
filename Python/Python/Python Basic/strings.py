name = "Chittajit Chakraborty"
#to Print the name to upper case
print(name.upper()) #.upper() is called methods

#To print the name in lower
print(name.lower())#lower() is called methods

#To find index in py in name
print(name.find('C')) #find() is called methods inside the parantheses C is to finding Value
print(name.find('k')) #find() is called methods inside the parantheses C is to finding Value
#We can find the whole word starting index
print(name.find("Chakraborty")) #find() is called methods inside the parantheses C is to finding Value
#And if it could't find the string or letter then it will return "-1"
print(name.find("chakraborty")) #find() is called methods inside the parantheses C is to finding Value

#To replace in string
print(name.replace("Chittajit", "Tatai"))
#You can also change the letter
print(name.replace("C", "M"))
#It does't change the original string
print(name)



                        #Keyword


#To Find a letter or charecter is exist in the string 
#If have then it will return true if don't it return false
print('C' in name)#True
print('M' in name)#False