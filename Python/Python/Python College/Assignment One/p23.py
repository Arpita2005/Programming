#Program to find the Volume and surface area of a cuboid . sa= 2(lb+bh+hl)

length = float(input("Enter the length of the cuboid: "))
breadth = float(input("Enter the breadth of the cuboid: "))
height = float(input("Enter the height of the cuboid: "))

print(f"The volume of the cuboid is: { length * breadth * height}")
print(f"The surface area of the cuboid is: {2 * (length * breadth + breadth * height + height * length)}")
