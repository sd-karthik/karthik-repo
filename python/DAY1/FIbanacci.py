# Print Fibonacci series
print "PRINTING FIBONACCI SERIES"
print "Choose your choice\n1.\t Using Maximum limit"
print "2.\t Using Number of elements to be prtinted"

choice = input()
	ele = 1
	ele2 = 0

# Printing Fibonacci the maximum limit 
if choice == 1 :
	limit = input("Enter the Maximum limit")

	if (ele < 1):
		print "invalid input"
		exit()
	else:
		while ele <= limit:
			print ele
			temp = ele2+ele
			ele2 = ele
			ele = temp

elif choice == 2:
	num = input("Enter the count of FIbonacci numbers to print")
	count =	0
	if num < 1 :
		print "Invalid input"
		exit()
	else:
		while count < num
			print ele
			temp = ele2+ele
			ele2 = ele
			ele = temp
else:
	print "Invalid choice"

		
