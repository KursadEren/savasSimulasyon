all: compile run

compile:

	gcc -I./include/ -o ./lib/Taktik.o -c ./src/Taktik.c
	gcc -I./include/ -o ./lib/koloni.o -c ./src/koloni.c
	gcc -I./include/ -o ./lib/Ataktik.o -c ./src/Ataktik.c
	gcc -I./include/ -o ./lib/Btaktik.o -c ./src/Btaktik.c
	gcc -I./include/ -o ./lib/Auret.o -c ./src/Auret.c
	gcc -I./include/ -o ./lib/Buret.o -c ./src/Buret.c
	
	

	
	gcc -I./include/ -o ./bin/test ./lib/Taktik.o ./lib/Btaktik.o ./lib/Buret.o ./lib/Auret.o ./lib/Ataktik.o ./src/test.c ./lib/Koloni.o 

run:
	./bin/test
