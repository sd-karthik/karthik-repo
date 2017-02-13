

#subsystem:
#	cd 1subdir && $(MAKE)

#subsysytem:
#	$(MAKE) -C 1subdir

SUBDIRS = sd_comm

subdirs:
	for dir in $(SUBDIRS); do \
               $(MAKE) -C $$dir; \
               done

