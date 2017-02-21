

#subsystem:
#	cd 1subdir && $(MAKE)

#subsysytem:
#	$(MAKE) -C 1subdir

SUBDIRS = const_volatile nausea_panacea 

subdirs:
	for dir in $(SUBDIRS); do \
               $(MAKE) -C $$dir; \
               done

