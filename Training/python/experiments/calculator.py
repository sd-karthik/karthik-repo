
op=input("Enter your option\n")
a=input("Enter the value a\n")
b=input("Enter the value b\n")


if (op==1):
	print a," + ",b," = ",(a+b)
elif op==2:
	print a," - ",b," = ",(a-b)
elif op==3:
	print a," * ",b," = ",(a*b)
elif op==4:
	print a," / ",b," = ",(a/b)
elif op==5:
	print a," ^ ",b," = ",(a**b)
else:
	print "invalid"
