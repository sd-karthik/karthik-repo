# NAME : SPIRAL MATRIX PRINT
# Print a matrix in spiral form

row = int(input("Enter the number of rows"))
col = int(input("Enter the column number"))
left = 0
right = 0
matrix = [[0 for x in range(row)] for y in range(col)] 

# User input for Matrix
for i in range(row):
	for j in range(col):
		matrix.append(input(value))
		
for i in range(left, col):
	print i
