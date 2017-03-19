#!/usr/bin/python

import os

host = "google.com"
port = "80"
resp = os.system("ping -c 1" + host + port)

if resp == 0:
	print host, "is up"
else:
	print host,"is down"
