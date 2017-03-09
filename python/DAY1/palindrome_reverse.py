def reverse(string):
	rev = string[::-1]
	return rev

string = input("Enter a number");
num = int(string)
rev = reverse(string);
print ("Reversed string:",rev)

# Checking for palindrome property:
if not(rev == string):
	print (num, "is Palindrome and prime")
else:
	print (num, "is not Palindrome , not prime")


#for num in range(1,num):
for i in range(2, num//2):
	if (num % i == 0):
		break
else:
