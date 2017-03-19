#!/usr/bin/python
import pxssh
import getpass
import time

try:
	s = pxssh.pxssh()
	s.force_password = True
	hostname = raw_input('hostname: ')
	username = raw_input('username: ')
	pas = getpass.getpass('password: ')

	if not	s.login (hostname, username, pas,login_timeout = 100000):
		print "login failed"
		exit()

	print "Login successful"
	while 1:
		s.sendline ('uptime')  # run a command
		s.prompt()             # match the prompt
		print s.before         # print everything before the prompt.
		time.sleep(10)
		s.sendline ('ls -l')
		s.prompt()
		time.sleep(10)
		print s.before
		s.sendline ('df')
		s.prompt()
		print s.before
	#	s.logout()
except pxssh.ExceptionPxssh, e:
	print "pxssh failed on login."
	print str(e)

