# 18. Program to take 3 integers as input, print their max, min, and mean
num1 = int(input("Enter the first integer: "))  
num2 = int(input("Enter the second integer: ")) 
num3 = int(input("Enter the third integer: "))  
max_num = max(num1, num2, num3)  # Find the maximum of the three integers using the max() function
min_num = min(num1, num2, num3)  # Find the minimum of the three integers using the min() function
mean_num = (num1 + num2 + num3) / 3  # Calculate the mean of the three integers
print("The maximum is:", max_num)  
print("The minimum is:", min_num)  
print("The mean is:", mean_num)  
