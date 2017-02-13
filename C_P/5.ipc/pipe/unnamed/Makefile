

#subsystem:
#	cd 1subdir && $(MAKE)

#subsysytem:
#	$(MAKE) -C 1subdir

SUBDIRS = child_parent_upipe dup pipe_man lswc

subdirs:
	for dir in $(SUBDIRS); do \
               $(MAKE) -C $$dir; \
               done

