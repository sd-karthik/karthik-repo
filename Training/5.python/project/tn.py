import getpass
import sys
import os
import telnetlib
import time

while True:
	HOST = raw_input("HOST: ")
	user = raw_input("Enter name: ")
	password = getpass.getpass()

	resp = os.system('ping -c 1 ' + HOST)
	print resp
	if not resp:
		tn = telnetlib.Telnet(HOST)
		tn.read_until("login: ")
		tn.write(user + "\n")

		if password:
			tn.read_until("Password: ")
			tn.write(password + "\n")

		print "Enter the schedule time ( 24 hrs format)"
		hour = input("HOUR : ")
		minute = input("MINUTE : ")
		command = raw_input("Command: ")
		while True:
			now = time.localtime()
			if (( now.tm_hour == hour) and (now.tm_min == minute)):
				print 'hai'
				tn.write(command+'\n')
				tn.write("exit\n")
				time.sleep(59)
	else: 
		print "System Down"
		
print tn.read_all()
