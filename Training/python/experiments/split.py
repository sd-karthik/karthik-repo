z = 'abcdabcdabcd abcd'
print "z =", z,"\n"

x = z.split()
print "z.split()\n", x,"\n"

x = z.split('abcd')
print "z.split('abcd')\n",x,"\n"

x = z.replace('a','z')
print "z.replace\n",x,"\n"

x = z.replace('a', 'z', 2)
print "z.replace\n",x, "\n"

x = z[3:6]
print "z[3:6]\n",x,"\n"

x = z[0:4] + 'zzzz' + z[8:]
print "z[0:4] + 'zzzz' + z[8:]\n", x, "\n"

y = "     spaced string    ", "\n"
print y, "\n"

x = y.strip()
x = "y.strip()\n" , x, "\n"
print "y.rstrip()\n", y.rstrip(), "\ny.lstrip()\n", y.lstrip(), "\n"

x = y.
