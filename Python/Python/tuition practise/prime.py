n=int(input("enter the number"))
flag=0
i=2
while(i<n):
    if (n%i==0):
        flag=1
        break
    i=i+1
if(flag==0):
    print("prime")
else:
    print("not prime")
