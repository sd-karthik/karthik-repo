class Shape():
	def __init__(self,x,y):
		self.x = x
		self.y = y
	def area(self):
		return self.x * self.y
	def perimeter(self):
		return 2 * (self.x+self.y)

class Square(Shape):
	def __init__(self,x):
		self.z = 10
		Shape.__init__(self,x,x)

myShape = Shape(10,20)
print myShape.area()
print myShape.perimeter()

mySquare = Square(25)
print mySquare.area()
print mySquare.perimeter()

