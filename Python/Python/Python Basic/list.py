#You can print number
marks = [95, 98, 79, 93,]
print (marks)

#you can also print numbers with strings
marks = [95, 98, 79, 93, "Math"]
print (marks)

#if we want to print with a sequence

marks = [90, 80, 95]
#its works as like string 0 is 90, 1 is 80 and 2 is 95
print(marks[1])
#in python -1 is use to count from backword but from backword it start with 1 not 0
print(marks[-1])

#To print the numbers from to sequence
marks=[95, 98, 79, 93,]
print(marks[0:4])
print(marks[1:4])
#in this case 4 will not include last three from it will include

# For loop in lists
marks=[95, 98, 79, 93,]
 
for score in marks :
    print(score)


#append operations (append means adding)
marks.append(99)
print(marks)
#append just use to add the numbr or string its not like adding(+) 


#To just add numbers in the center of cequence 
marks=[95, 98, 79, 93]
marks.insert(1, 99) #first one (1) is the index numbers and the secound one is to insert number
print (marks)

#to check the existence of thee numbers
print (99 in marks)# in is the keyword it will check that is 99 exist in marks! or not
print (94 in marks)

#To check the length of the marks 
print (len(marks))# it will print the index number


#using while loop

marks = [95, 98, 79, 93,]

i = 0
while i< len(marks):
    print (marks[i])
    i= i+ 1

#To clear this all of list the operations
marks.clear()
print(marks)