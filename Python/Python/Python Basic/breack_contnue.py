students = ["Chittajit", "Tatai", "Sourav", "Tania", "Buddha"]
for student in students :
    if student == "Tania": #we just want to print chittajit to sourav not from tania to buddha
        break;
    print(student)


print("------------------Gap -------------------------")
#To just not print someone 
students = ["Chittajit", "Tatai", "Sourav", "Tania", "Buddha"]
for student in students :
    if student == "Tania": #we just not want to print tania 
        continue;
    print(student)