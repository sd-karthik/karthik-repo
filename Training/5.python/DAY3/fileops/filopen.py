#!/usr/bin/python

" The program works same as cat function but takes only one file for concatenation"
import sys
import os

length = len(sys.argv)

if not length == 2:
	print " Error: Enter valid number of files"
	exit()
elif not os.path.exists(sys.argv[1]):
	print "Error: File doesn't exit"
	exit()
else:
	f1 = open(sys.argv[1], "r")
	print f1.read()
