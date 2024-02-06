# 16. Program to take comma-separated city names and print them in sorted order


city_names_input = input("Enter comma-separated city names: ")

    # split() method splits string at each ',' creating a list of individual city names. 
cities_list = city_names_input.split(',')

    #sorted() function used to sort the list of city names (cities_list) alphabetically.
sorted_cities = sorted(cities_list)  #
print("The comma-separated city names in sorted order are:", sorted_cities)


"""
cities = city_names.split(',')
print(sorted(cities))  # Print the comma-separated city names in sorted order
"""