from pexpect import pxssh
import getpass
import time
import os
while True:
	try:
		s = pxssh.pxssh()
		hostname = raw_input('hostname: ')
		username = raw_input('username: ')
		password = getpass.getpass('password: ')
		response = os.system('ping -c 1 ' + hostname) 
		if not response :
			s.login(hostname, username, password,login_timeout = 100)
			print 'Enter time in 24hrs format'
			hour = input('Enter hour:')
			minute = input('Enter minute:') 
			while True:
				now = time.localtime()
				if((now.tm_hour == hour) and (now.tm_min == minute)):
					s.sendline('uptime')   # run a command
					s.prompt()             # match the prompt
					print(s.before)        # print everything before the prompt.
					s.sendline('ls -l')
					s.prompt()
					print(s.before)
					s.sendline('df')
					s.prompt()
					print(s.before)
					time.sleep(24*60*60)
		else :
			print 'system is down'

	except pxssh.ExceptionPxssh as e:
		print("pxssh failed on login.")
		print(e)
	except pxssh.pxssh.EOF:
		print 'login failed'
