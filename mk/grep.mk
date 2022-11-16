.PHONY: f fv fc g gv vi

BDIR ?=$(shell pwd | sed -En 's/src.*/build/p')
path ?= ~/Project/rasp/pico-sdk/src \
		src \
		~/Project/rasp/pico-sdk \
		$(BDIR)
idx ?= 1 # line number

f: 
	@find $(word $(idx),$(path)) -regextype posix-extended -regex '$(pat)' | grep -E -n --color=always '^/|/|[^/]*$$'

fv: 
	@find $(word $(idx),$(path))  -regextype posix-extended -regex '$(pat)' \
		| sed -En '$(idx)s#.*#nvim &#p' | sh

fcf: 
	@for i in `$(word $(idx),$(path)) -regextype posix-extended -regex '$(pat)'` \
		;do if [[ -z $$i ]] ;then continue;fi; \
			cp $$i .; tree . \
		;done
fcd: 
	@for i in `$(word $(idx),$(path)) -regextype posix-extended -regex '$(pat)'` \
		;do if [[ -z $$i ]] ;then continue;fi; \
			mkdir -p $$(sed -En 's#.*(include|src)(.*)/.*#\1\2#gp' <<< $$i);\
			if [[ $$i =~ .*\.h ]] ;then cp $$i `sed -En 's#.*(include/.*\.h)$$#\1#p' <<< $$i`;tree include \
			;elif [[ $$i =~ .*\.[cS] ]] ;then cp $$i `sed -En 's#.*(src/.*\.[cS])$$#\1#p' <<< $$i`; tree src \
			;else cp $$i .; tree . \
			;fi \
		;done
g:
	@grep --color=always -ERHn '$(pat)' $(word $(idx), $(path))

gv:
	@grep -ERHn '$(pat)' $(word $(idx),$(path)) \
		| sed -En -e '$(idx)s#([^:]+):([0-9]+):.*#nvim +\2 \1#p' | sh

