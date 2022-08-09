flags = -Wall

run: clean build
	./build/bis_bic
build/show_bytes.o:
	gcc -o build/show_bytes.o -c $(flags) show_bytes.c
build/bis_bic.o:
	gcc -o build/bis_bic.o -c $(flags) bis_bic.c
build: build/show_bytes.o build/bis_bic.o
	gcc -o build/bis_bic $(flags) build/show_bytes.o build/bis_bic.o
clean:
	rm -f build/*
