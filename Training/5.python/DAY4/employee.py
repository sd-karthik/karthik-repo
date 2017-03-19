class Employee():
		empcount = 0
		def __init__(self,data):
			Employee.empcount += 1
			self.salary = data	
		def displaycount(self):
			return Employee.empcount
		def	salary(self):
			return self.salary
emp1 = Employee(100)
emp1.displaycount()
emp2 = Employee(200)
emp2.displaycount()
emp1.displaycount()
