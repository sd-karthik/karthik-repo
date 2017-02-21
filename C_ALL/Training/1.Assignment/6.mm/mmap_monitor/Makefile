obj-m:=kmod.o

KDIR:=/lib/modules/$(shell uname -r)/build
PWD:=$(shell pwd)

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
	@rm -f Module.symvers app_kmod
#	@rm app
app:
	gcc -o app app_kmod.c -Wall

insmod:
		insmod kmod.ko devname=myChar	

cleanapp:
		@rm app
