.PHONY: headers_install

headers_install:
	mkdir -p $(O)
	cp -r prebuilts/kernel-headers/* $(O)/
