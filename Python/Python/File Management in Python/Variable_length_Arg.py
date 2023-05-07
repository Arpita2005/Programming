# Function definition is here
def printinfo( arg1, *vartuple ):
    #This prints a variable passed arguments"
    print ("Output is: ")
    print (arg1)
    for var in vartuple:
        print (var)
    return
# Now you can call printinfo function
printinfo( 10 )
printinfo( 70, 60, 50 )
printinfo( 70, 60, 50 ,89,65,43,21)
