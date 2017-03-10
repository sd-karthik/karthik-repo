# Program of sample implementation of list

lst1 = [10, "hello", "20"]

# Printing the whole list
print lst1

# Print element by element
# (i) while
ele = len(lst1)
i = 0
s = "*"
s = s.center(60, '*')
print s
print "Printing Using while"
while (i < ele):
	print lst1[i]
	i+=1
print s.center(60, '*')

# (ii) for
print s.center(60, '*')
print "Printing Using for"
for ele in lst1:
	print ele
print s.center(60, '*')

