"""
        This Program made By  : Chittajit Chakraborty
"""

name = input(" Enter your name : ")
age = input(" Enter your age : ")

age = input(age)

if name == "Dip" and age == 16:
    print(" You are a noob and you know that ")
elif name == "Chittajit" or "Tatai" and age == 19:
    print("You are a pro and everyone know's that ")
elif name == "" and age == "":
    print(" You have not entered any age or name to show details")
elif age >= 1 and age <= 18:
    print("Sorry"+name+"You are not eligble for this round cause you are " + age)
elif age >= 20 and age <= 50:
    print("You can try to get this ")
elif age > 50 and age <= 100:
    print(" Sorry Mr./Ms."+name +
          "You can be a part of this contest cause your age is "+age)
else:
    print("Are you alive Mr./Ms. "+name+"Cause your age is "+age)
