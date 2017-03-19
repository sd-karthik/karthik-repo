#!/usr/bin/python

import sys
import os

length = len(sys.argv)
if not length == 2:
	print "Suggestion: Enter the path to add as well"
	exit()
else:
	print "Before Update:\n",sys.path
	sys.path.append(sys.argv[1])
	print "\nAfter Update:\n",sys.path
