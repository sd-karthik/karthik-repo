for i in range(2, 100):
	x = i//2
	for j in range(2, x):
		if ( i % j != 0 ):
			y=i/j
			print (j)
			break
