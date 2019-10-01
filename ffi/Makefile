.PHONY: build clean
build: build@struct build@test

build@struct:
	gcc -fpic -c struct.c
	#gcc -pie -rdynamic -o test test.o
	gcc -rdynamic -o struct.inadl struct.o
	rm struct.o

build@test:
	gcc -fpic -c test.c
	#gcc -pie -rdynamic -o test test.o
	gcc -rdynamic -o test.inadl test.o
	rm test.o

clean:
	rm test.inadl
	rm struct.inadl