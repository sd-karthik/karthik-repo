#!/usr/bin/python

import telnetlib
import getpass

hostserver = raw_input("HOST: ")
port = 23
username = raw_input("USER NAME: ")
#password = getpass.getpass("Password :")

telnet = telnetlib.Telnet()
telnet.open(hostserver,port,timeout=60)
print "read_until:" ,telnet.read_until("login: ")
print "write",telnet.write(username)
#telnet.read_until("Password: ")
#telnet.write(password)
telnet.write("ls\n")
telnet.write("exit\n")
#while 1:
 #   command = raw_input("SHELL:")
  #  telnet.write(command + '\n')

   # if command == "exit":
    #    break
telnet.read_all()
