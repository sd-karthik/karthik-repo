# FILENAME	:	Number_system.py
# FUNCTION	:	Print the number in different number system:
#	input	: decimal
# 	output	: 	1. 	Binary	
#				2. 	Hexadecimal	
#				3.	Octal

def docs():
	"FILENAME  :   Number_system.py\n"\
"FUNCTION  :   Print the number in different number system:\n"\
"input	: 	decimal\n"\
"output	:	1.  Binary \n"\
"			2.  Hexadecimal\n"\
"			3.  Octal\n"

print "NUMBER CONVERSION"
choice = input("Enter your option\n1. BINARY\n2. HEX\n3. OCTAL\n")

if(choice == 1):
	dnum = input("Enter a decimal number\n")
	print "DECIMAL :",dnum,"BINARY :",bin(dnum)
elif(choice == 2):
	dnum = input("Enter a decimal number\n")
	print "DECIMAL :",dnum,"HEX :",hex(dnum)
elif(choice == 3):
	dnum = input("Enter a decimal number\n")
	print "DECIMAL :",dnum,"OCTAL :",oct(dnum)
else:
	print "YEAH THERE ARE OTHER NUMBERS BUT U CANT USE HERE"
	
