class Number():
		def __init__(self,start):
			self.data=start
		def __sub__(self,other):
			return Number(self.data - other)
		def __add__(self,other):
			return Number(self.data + other)
		def __mul__(self,other):
			return Number(self.data * other)
		def displaydata(self):
			return self.data


X = Number(7)
Y = X - 4
print Y.displaydata()
Y = X + 20
print Y.displaydata()
print (X * 10).displaydata()

