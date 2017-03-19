class myException(Exception):
	pass
try:
	raise myException
except myException:
	print "myException occurred"
