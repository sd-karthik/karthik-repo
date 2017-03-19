#!/usr/bin/python
" Commandline arguments which accepts commandline arguments and returns the sum of it"
import sys

sum = 0

for ele in sys.argv[1:]:
	sum += int(ele)
print sum
