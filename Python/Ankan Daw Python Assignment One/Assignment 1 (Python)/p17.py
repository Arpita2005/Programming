# 17. Program to take comma-separated city names and print only unique city names and in sorted order

input_cities = input("Enter comma-separated city names: ")

cities_list = input_cities.split(',')

# set() function takes an iterable as an argument and converts it into a set.
# Its similar to a mathematical set and does not allow duplicate elements so this step removes them
unique_cities_set = set(cities_list)

sorted_unique_cities = sorted(unique_cities_set)# sort() function sorts the list alphabetically
print("The unique city names in sorted order are:", sorted_unique_cities)  # Print the sorted unique city names
