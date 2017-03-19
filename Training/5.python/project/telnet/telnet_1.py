#!/usr/bin/python

import telnetlib
import getpass
import sys
import time
import socket

#class login():
try:
	Host = raw_input("Enter Host: ")
	user = raw_input("Enter user name: ")

#	password = getpass.getpass()
	
	teln = telnetlib.Telnet()
	teln.open(Host, port = 23)
	resp = teln.read_until("login: ", timeout = 120)
	print resp
#except EOFError as e:
#	print "Connection closed : %s"%e

	erro1 = teln.write(user + "\n")

	if erro1:
		print "Error:", erro1
		sys.exit()
	
#	if password:
#		teln.read_until("Password: ")
#		teln.write(password + "\n")
	while True:
		command = raw_input("[shell]:")

		if command == "exit":
			break;
		telnet.write(command )	
		print teln.read_all()

except NameError:
	print "NameError"
except socket.gaierror:
	print"socket.gaierror: socket Error"

