# 	FILE : sample.py
#	DESC : Script which has all the program but to choose only 1 by the user
while(1):
	print "choose any option"
	print "1. Checking for =100, <100, >100"
	print "2. Print 1-10"
	print "3. Print 1-5 using break"
	print "4. Print 1-10 except 5"
	print "5. Check the day status"
	print "Any other option to exit"

	choice = input()

# EXP1: To check the given number is greater than or
#		equal to or less than 100
	if (choice == 1):
		num = input("Enter a number\n")
	
		if (num == 100):
			print "Entered number", num, "is equal"
		elif(num > 100):
			print "Entered number", num, "is greater than 100"
		else:
			print "Entered number", num, "is lesser than 100"

# EXP2: To print a numbers: 1 - 10
	elif (choice == 2):
		print "Printing the numbers from 1 - 10"
		num2 = 1
		while (num2 <= 10):
			print num2
			num2+=1

# EXP3: To print the numbers: 1 - 5 using break for EXP2
	elif (choice == 3):
		print "Printing the numbers from 1-5 using break"
		num3 = 1
		while (num3 <= 10):
			if(num3 == 6):
				break
			print num3
			num3+=1

# EXP4: To print the numbers from 1-10 except 5
	elif (choice == 4):
		print "Printing the numbers from 1-10 except 5"
		num4 = 1
		while (num4 <= 10):
			if(num4 == 5):
				num4+=1
				continue
			print num4
			num4+=1	
	
# EXP5: To print weekday working status
	elif (choice == 5):
		print "YOUR WEEKDAY WORKING STATUS"
	
		day = raw_input("Enter the day you want to check(lowercase)\n")
		if (day=="monday" or day=="tuesday" or day=="wednesday" or day=="thursday" or day=="friday"):
			print "Its a weekday..!!\nHurry to office"
		elif ( day == "saturday"):
			print "GO to party!!\nIts a weekend"
		elif (day == "sunday"):
			print "Its Holiday!! Hug your bed"
		else:
			print "Does that day really exist!!\nInput a proper one"
# Wrong input : validation
	else:
		print "EXITING"
		break;
