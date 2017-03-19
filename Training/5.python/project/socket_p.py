import socket

sock_1= socket.socket()
host = socket.gethostname()
print sock_1,host
portnum = 550

sock_1.bind((host,portnum))
sock_1.listen(5)

while 1:
	client, addr = sock_1.accept()
	print 'connected',addr
	client.send('hai')
	client.close()
