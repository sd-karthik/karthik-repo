

import calc_ops

while(1):
	print " CALCULATOR ".center(40, '*')
	print "1. Simple Calculator\n2. Scienticfic Calculator\n3. Clear Screen\n4.EXIT"
	choice = input("Enter Choice\n")
	if choice == 1:
		print "-".center(40,'-')
		print "1. ADD\n2. SUB\n3. MUL\n4. DIV\n5.GO BACK"
		ch = input("Enter your Choice\n")
		print "-".center(40,'-')
		if ch == 1:
			num1 = input("Enter 2 numbers\n")
			num2 = input()
			print num1,'+',num2,'=',calc_ops.add(num1,num2)
		elif ch == 2:
			num1 = input("Enter 2 numbers\n")
			num2 = input()
			print num1,'-',num2,'=',calc_ops.sub(num1,num2)
		elif ch == 3:
			num1 = input("Enter 2 numbers\n")
			num2 = input()
			print num1,'*',num2,'=',calc_ops.mul(num1,num2)
		elif ch == 4:
			num1 = input("Enter 2 numbers\n")
			num2 = input()
			if(num2 == 0):
				print "DIVIDE BY ZERO NOT POSSIBLE"
			else:
				print num1,'/',num2,'=',calc_ops.divi(num1,num2)
		elif ch == 5:
			pass
		else:
			print "Invalid option"	
		print "-".center(40,'-')

	elif choice == 2:
		print "-".center(40,'-')
		print "1. SINE\n2. COSINE\n3.SQUARE ROOT\n4.POWER OF\n5.GO BACK\n"
		ch = input("Enter your choice\n")
		print "-".center(40,'-')
		if ch == 1:
			num = input("Enter the angle in radians\n")
			print "sin(",num,') =',calc_ops.sine(num)
		elif ch == 2:
			num = input("Enter the angle in radians\n")
			print "cos(",num,') =',calc_ops.cosine(num)
		elif ch == 3:
			num = input("Enter a number\n")
			print "sqrt(",num,') =',calc_ops.sqroot(num)
		elif ch == 4:
			num1 = input("Enter a numbers\n")
			num2 = input(" Enter the power\n")
			if(num2 == 0):
				print "DIVIDE BY ZERO NOT POSSIBLE"
			else:
				print num1,'^',num2,'=',calc_ops.powof(num1,num2)
		print "-".center(40, '-')
	elif choice == 3:
		calc_ops.clear()
	elif choice == 4:
		print "EXIT"
		print "-".center(40,'-')
		exit()
	else:
		print "Invalid option"
		exit()
