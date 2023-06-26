#  Count the length of strinng 

note = "Nice to meet you and have a nice day" 
print(len(note))

#  End with defined letters

input = "There was a lion in the forest"
print(input.endswith("est"))

#  Count how much time a letter will occure
print(input.count("e"))
print(input.count("as"))

#  Capitalize the first number 

input1 = "there was a lion in the forest"
print(input1.capitalize())

#  Find an element from an array 

print(note.find("you"))    # it will gove the starting index of the element
print(note.find("night"))  # -1 means it is not present

#  Replace any element from an array 

print(note.replace("to","of"))