

#subsystem:
#	cd 1subdir && $(MAKE)

#subsysytem:
#	$(MAKE) -C 1subdir

SUBDIRS = 5.ipc 6.mm 7.socket

subdirs:
	for dir in $(SUBDIRS); do \
               $(MAKE) -C $$dir; \
               done

