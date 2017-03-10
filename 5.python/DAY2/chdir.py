# Program to change the directory

#importing the os module in the script
import os

#Changing the path
dir_path = raw_input("Enter the path\n")
os.chdir(dir_path)
print "Changed path:", os.getcwdu()

#creating new folder
dir_name = raw_input("Enter the new directory name\n")
os.mkdir(dir_name,0777)
print "Changed name:",dir_name
