# FILE NAME : class.py
# Function	: -> A Class is defined
#			  -> 4 methods are defined ( excluding __init__ its 3)
#			  -> __init__ is constructor which contains all the 
#				attributes which are used in the methods
def docs():
	" Function  : -> A Class is defined\
             -> 4 methods are defined ( excluding __init__ its 3)\
             -> __init__ is constructor which contains all the \
               attributes which are used in the methods"

class _A:                            
     	def __init__(self):            
			print "In __init__ function"
			self.x = 10		# Public                   
			self._y = 20	# Semi Private
			self.__z = 30	# Fully Private

      	def fn1(self):      
 			print "In fn1 function"
      	def _fn2(self):
 			print "In _fn2 function"
      	def __fn3(self):
     		print "In __fn3 function"

try:
	m = _A()            # A.__init__(m); Creating an object
	print m.x           # Printing an attribute
	print m._y
	print m._A__z		# The way of accessing Private (not recommended)
except AttributeError:
	print "AttributeError: Private Access"

try:
	m.fn1()
	m._fn2()
	m._A__fn3()			#
except AttributeError:
	print "AttributeError: Private Access"
