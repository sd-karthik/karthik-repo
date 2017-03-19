#!/usr/bin/python

" The program works same as cat function but takes only one file for concatenation"
import sys
import os

length = len(sys.argv)

if not length == 3:
	print " Error: Enter valid number of files"
	exit()
elif not os.path.exists(sys.argv[1]):
	print "Error: File doesn't exit"
	exit()

else:
	if os.path.exists(sys.argv[2]):
		print "File",sys.argv[2],"exists!! Its overwritten"
	f1 = open(sys.argv[1], "r")
	f2 = open(sys.argv[2], "w")
	f2.write(f1.read())
	f1.close()
	f2.close()
