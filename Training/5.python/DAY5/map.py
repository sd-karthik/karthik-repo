#	FILE: map.py
#	Functions	:	Implementation of map
#					-> Map will apply the functionality of each elements#					in a list and returns the each element


def sqr(x):
	return x*x

def mul(x):
	return x*3

items =  [1,2,3,4,5]
print "map: sqr:", map(sqr, items)

# returns a list
list1 = map(lambda x:x*x*x, items )
print "map:lambda x:x*x*x:", list1

items.append('ha')
print "append 'ha': map:mul", map(mul, items)

items.remove("ha")
# returns one value
print "remove 'ha': reduce: lambda x,y:x+y:",reduce(lambda x,y:x+y, items,5)


