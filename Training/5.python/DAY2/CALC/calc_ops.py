#


import math
import os

def add(val1,val2):
	"This function adds and returns the sum"
	return val1+val2
def sub(val1,val2):
	"This function subtracts and returns the value"
	return val1-val2
def mul(val1,val2):
	"This function multiply and returns the product"
	return val1*val2
def divi(val1,val2):
	"This function adds and returns the value"
	return val1/val2

def sine(val1):
	"This function finds the sine of angle in radians and returns the value"
	return math.sin(val1)

def cosine(val1):
	"This function finds the sine of angle in radians and returns the value"
	return math.cos(val1)
def sqroot(val1):
	"This finds the square root of a number"
	return math.sqrt(val1)
def powof(val1,val2):
	"This finds the power of a number"
	return math.pow(val1,val2)
def clear():
	"Clears the screen"
	os.system("clear")
