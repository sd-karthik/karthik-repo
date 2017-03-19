#! /usr/bin/python

import socket
import sys

def __doc__():
	'''TCP client.'''

class MySocket(socket.socket) :
	"class derived from socket class. Which is used to create socket"
	
        def communicate(self) :
		"""This method is for taking IP addr, port number and binding to socket. 
		   And for providing communication with server"""
		try :
			addr = raw_input("Enter Server IP address : ")
			port = input("Enter Server port number : ")
		except SyntaxError:
			print "SyntaxError: Invalid input "
			sys.exit(1)
		except OverFlowError:
			print "OverFlowError: Enter Valid port number"
			sys.exit(1)			
		try:
                	self.connect((addr,port))
		except socket.error as e :
			print "SocketError: Cannot connect to server due to ",e
			sys.exit(1)

                while True :
			try :
				st = raw_input("TO SERVER : ")
				self.send(st)
				if st == "exit":
					print "Terminating connection with server"
					break
    				string = self.recv(100)
    				print "FROM SERVER : ", string
			except socket.error as e:
				print "SocketError: Cannot send/recieve message due to ",e
				sys.exit(1)
		self.close()


sd = MySocket(socket.AF_INET,socket.SOCK_STREAM)
sd.communicate()
