.PHONY: f fv fc g gv vi

BDIR ?=$(shell pwd | sed -En 's%src.*%build%p')
path ?= ~/Project/rasp/pico-sdk/src \
		src \
		~/Project/rasp/pico-sdk \
		$(BDIR)
pn ?= 1
fn ?= 1
pat ?=.*\.ld

f: 
	@find $(word $(pn),$(path)) -regextype posix-extended -regex '$(pat)' | grep -E -n --color=always '^/|/|[^/]*$$'

fv: 
	@find $(word $(pn),$(path))  -regextype posix-extended -regex '$(pat)' \
		| sed -En '$(fn)s%[^/]*(.*)%nvim \1%p' | sh

fcf: 
	@find $(word $(pn),$(path))  -regextype posix-extended -regex '$(pat)' \
		| sed -En '$(fn)s%[^/]*(/.*)%cp \1 .%p' | sh
fcd: 
	@for i in `find $(word $(pn),$(path)) -regextype posix-extended -regex '$(pat)'` \
		;do if [[ -z $$i && $$i =~ ^$(fn) ]] ;\
			then mkdir -p $$(sed -En 's%.*(include|src)(.*)/.*%tmp/\1\2%gp' <<< $$i)\
				;if [[ $$i =~ .*\.h ]] ; \
					then cp $$i `sed -En 's%.*(include/.*\.h)$$%tmp/\1%p' <<< $$i`;tree include \
				;elif [[ $$i =~ .*\.[cS] ]] ;then cp $$i `sed -En 's%.*(src/.*\.[cS])$$%tmp/\1%p' <<< $$i`; tree src \
				;else cp $$i .; tree . -L 1 \
				;fi \
			fi;\
		;done
g:
	@grep --color=always -ERHn '$(pat)' $(word $(pn), $(path))

gv:
	@grep -ERHn '$(pat)' $(word $(pn),$(path)) \
		| sed -En -e '$(fn)s#([^:]+):([0-9]+):.*#nvim +\2 \1#p' | sh

