# FILE		: fun_var_arguments.py
# Function	: Factorial of a number using recursion

def recur(num):
	if not num:
		return num*recur(num-1)
	else:
		return 1
num1 = input("Enter a number to find its Factorial\n")
total = recur(num1 )
print "FACT(", num1,"):", total
