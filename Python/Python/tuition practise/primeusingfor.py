n=int(input("enter the number"))
flag=0
#i=2
#while(i<n):
for i in range(2,n-1):
    if (n%i==0):
        flag=1
        break
if(flag==0):
    print("prime")
else:
    print("not prime")
