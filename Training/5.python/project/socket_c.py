import socket

serv = socket.socket()

host = socket.gethostname()

portnum = 550

serv.connect((host,portnum))

while 1:
	print serv.recv()
	serv.send('hello')
serv.close()
