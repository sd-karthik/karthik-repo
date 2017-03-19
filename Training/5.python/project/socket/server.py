#! /usr/bin/python

import socket
import sys

def __doc__():
	'''TCP Server.'''

class MySocket(socket.socket) :	
	"class derived from socket class. Which is used to create socket"
	
	def soc_create(self) :
		"This method is for taking IP addr, port number and binding to socket "
		try :
			host = raw_input("Enter Server IP : ")
			port = input("Enter port number : ")
			self.bind((host, port))
		except OverflowError:
			print "OverFlowError: Enter valid port number"
			sys.exit(1)
		except SyntaxError:
			print "SynatxError: Invalid input "
			sys.exit(1)
		except socket.error:
			print "SocketError: socket creation failed"
			sys.exit(1)
		except NameError:
			print "NameError: Enter valid input"
			sys.exit(1)		
	def communicate(self) :
		"This method is for accepting client request and providing communication"
		try:
			self.listen(5)
			serv, addr = self.accept()
			print 'connected to ',addr
		except socket.error as e:
			print "Error in socket due to ",e
			serv.close()
			sys.exit(1)
		
		while True :
			string = serv.recv(100)
			print "FROM CLIENT : ",string
			if string == "exit":
				print "Terminating connection with client ",addr
				self.communicate()
			try :
				st = raw_input("TO CLIENT : ")
				serv.send(st)
			except SyntaxError:
                        	print "SynatxError: Invalid input to message"
		serv.close()
		
sd = MySocket(socket.AF_INET,socket.SOCK_STREAM)
sd.soc_create()
sd.communicate()		

