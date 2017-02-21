

define CMDS
ls
pwd
cat Makefile
endef

define FUNC2
echo "Parameter = $1"
$(call CMDS)
endef

define FUNC
echo "First parameter is $1"
echo "Second parameter is $2"
$(call FUNC2, $2)
endef

test:
	$(call FUNC, "global", "edge")


