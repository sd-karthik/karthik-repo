subdir: 
	for dir in $(ls); do \
		if[ -d $(dir) ]; then \ 
			echo "folder found $$dir" ;
			$(MAKE) -c $(dir); \
		elif[ ${dir: -2 } == ".c" ]; then \
			gcc -c $(dir);
		fi;
	done;
	@echo "done!!"
