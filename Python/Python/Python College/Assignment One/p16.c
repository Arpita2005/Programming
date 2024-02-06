# 16. Program to take comma-separated city names and print them in sorted order
city_names_input = input("Enter comma-separated city names: ")
cities_list = city_names_input.split(',')
sorted_cities = sorted(cities_list)  #
print("The comma-separated city names in sorted order are:", sorted_cities)


"""
 # split() method splits string at each ',' creating a list of individual city names. 
cities = city_names.split(',')
#sorted() function used to sort the list of city names (cities_list) alphabetically.
print(sorted(cities))  # Print the comma-separated city names in sorted order
"""