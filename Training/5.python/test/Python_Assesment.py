# AUTHOR	:	Karthik Shetty
# DATE		:	15 / 03 / 2017

#=======================================================================
# question 1

# 12/(4+1) = 2
# integer division

#=======================================================================
#question 2

# 26**100
# output: 3142930641582938830174357788501626427282669988762475256374173175398995908420104023465432599069702289330964075081611719197835869803511992549376L
#=======================================================================

# question 3
if (0):
	l = ['Monty','Python'] * 20		#20 times it will append the strings
	str1 = raw_input ("enter the string")
	res = str1 * 3 	# 3 times the string will append 
# 
#=======================================================================
# question 4
if (0):
	text4 = "abcabc"
	print  len(set(text4))
#	op: 3
# 	->set returns the set of charcaters used in the strings as a list
#	-> len calculates length of that set list

#	-> set is class, len is a builtin_function
#	-> the above combination of len with set returns the number of letters used in the string(non-repeated)


#======================================================================
# question 5
if(0):
	my_string = "I am writing exam"
	print my_string + my_string 	#I am writing examI am writing exam
	print my_string * 3				#I am writing examI am writing examI am writing exam

#solution:
	print my_string+' '+my_string
	print (my_string + ' ') * 3
#=======================================================================
# question 6
if(0):
	my_sent = ['My', 'Answers']
	a = ' '.join(my_sent)
	print a
	b = a.split(' ')

#	-> join will join the string with the mentioned space while joining
#	-> split will split the string 

#=======================================================================
# question 7
if(0):
	phrase1 = "hai"
	phrase2 = "hello"
	
	print len(phrase1+phrase2)
	print len(phrase1)+len(phrase2)

#->len(phrase1+phrase2) : calculate the length after joining the string
#->len(phrase1)+len(phrase2): calculates the length individually and adds

#=======================================================================
	
# question 8
if(0):
	text1 = "welcomE"
	text2 = "globaledge"
	sorted(set([text1.lower() for e in text1]))
	# ['welcome']
	sorted([text1.lower() for e in set(text1)])	
	# ['welcome', 'welcome', 'welcome', 'welcome', 'welcome', 'welcome', 'welcome']

#---------------------------------------------------------------------
# question 9
if(0):
	str1 = "case checking"
	str1.isupper()		# False: checks whether upper
	not str1.islower()	#False: checks whether lower and checks for not of it
#---------------------------------------------------------------------
# question 10
if (0):
	text2 = "good morning"
	x = text2.split()	#method1
	x[-2:]				#method2
#======================================================================
#question 12
if(0):
	Sent = ['she', 'sells', 'sea', 'shells', 'by', 'the', 'sea', 'shore']
	for words in Sent:
		if words.startswith ('sh'):
			print words		#she shells shore 
	
	for words in Sent:
		if len (words) > 4:
			print words 	#she shells shore
#======================================================================
# question 11
if(0):
	import re
	text = "size prize pt path zebra"
	text1 = text.split()
	Speclist = []

	for eachword in text1:
		if eachword.endswith ('ize'):
			Speclist.append (eachword)
			
	print Speclist	# op: ['size', 'prize']

	for eachword in text1:
		if 'z' in eachword:
			Speclist.append (eachword)
	print Speclist	

	print text1.findall
	# op: ['size', 'prize', 'size', 'prize', 'zebra']

	re.findall('[a-zA-Z]*pt+[a-zA-Z]',text)
	# ['pt']
'''
C. 	Only change the sentence if 'pt' in eachword , the other same
D.	if eachword.istitle (): 
'''
#======================================================================
# question 13
if(0):
	text1 = "sample line "
	sum([len(w)for w in text1])
	average = sum([len(w)for w in text]) / len(text1)
	print average
#=======================================================================
# question 14
if(0):
	def vocab_size(text):
		count = 0
		text = text.split()
#		return len(text.split())
		for word in text:
			count += len(word)
		return count

	text = raw_input("enter the text:")
	print vocab_size(text)
#=======================================================================
# question 15
if(0):
	def fun_percent(word,text):
		a = len(text.split())
		print a
		b = text.count(word)
		print b
		return ((float(b)/float(a)) * 100)
	
	text = raw_input ("enter the text")
	word = raw_input ("enter the word")
	print fun_percent(word,text)
#======================================================================
#question 16
if(1):
	text1 = "hiiii everyone"
	text2 = "hiiii everyone gud evening"
	x = set(text1) < set(text2)
	print x
'''checks whaether text1 is subset of text2 or not anhd returns boolean'''
#=======================================================================
# question 17
if(0):
	s  = 'colorless'
	a = s[0:4]
	b = s[4:]
	print a + 'u' + b
#======================================================================
# question 18
if(0):
	word = raw_input("enter the word")
	n = word.index('-')
	word  = word[0:n] + word[(n+1):]
	print word

#======================================================================
# question 20
if(0):
	import urllib
	import sys
	from bs4 import BeautifulSoup

	f1 = urllib.urlopen(sys.argv[1]) 
	html = f1.read()

	soup = BeautifulSoup(html,"lxml")

	for script in soup(["script","style"]):
		script.extract()

	text = soup.get_text()

	lines = (line.strip() for line in text.splitlines())
	chunks = (phrase.strip() for line in lines for phrase in line.split("  "))
	text = '\n'.join(chunk for chunk in chunks if chunk)

	print text.encode("utf-8")
#======================================================================
#question 21
if(0):
	words = ["good","morning","evening","night"]
	print words.sort()
	print sorted(words)
#======================================================================
#question 22
if(0):
#	from test import msg
	import test
	
	print test.msg
#=======================================================================
#question 23
if(0):
	import webbrowser
	url = raw_input("enter the url:")
	webbrowser.open(url)
#=======================================================================
