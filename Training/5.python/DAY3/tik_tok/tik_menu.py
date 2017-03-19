# FILE Name : 	tik_menu.py
# Function	:	tik-tok game implementation

import os

lst1 = [['*','*','*'],['*','*','*'],['*', '*','*']]

#choice = input("Choose the player\n 1. Player_1 (0)\n2. Player_2 (1)\n")

#if choice == 1:
def matrix():
#	os.system("clear")
	for i in lst1:
		print "\t", i[0],"   ",i[1],"   ",i[2],"\n"

def compare(pos):
	f_row = pos/3
	print f_row
	for i in lst1[f_row]:
		f_pos = pos%3
		if i[f_pos] == '*':
			i[pos] = 0
		else:
			print "Already entered"
		
def valid(pos):
	if pos < 0 and pos > 9:
		print pos
		print "Enter valid input"
		pos = input("PLAYER1 : Enter the position:\n")
		valid(pos)

matrix()
pos = input("PLAYER1 : Enter the position:\n")
valid(pos)
#compare(pos)
matrix()
