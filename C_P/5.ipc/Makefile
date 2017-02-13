

#subsystem:
#	cd 1subdir && $(MAKE)

#subsysytem:
#	$(MAKE) -C 1subdir

SUBDIRS = pipe message_queue shared_memory

subdirs:
	for dir in $(SUBDIRS); do \
               $(MAKE) -C $$dir; \
               done

