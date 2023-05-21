all: compile run

compile:

	 gcc -I./include/ -o ./lib/Taktik.o -c ./src/Taktik.c
	 gcc -I./include/ -o ./lib/Btaktik.o -c ./src/Btaktik.c
	 gcc -I./include/ -o ./lib/Ataktik.o -c ./src/Ataktik.c
	 gcc -I./include/ -o ./lib/Koloni.o -c ./src/Koloni.c
	 gcc -I./include/ -o ./lib/uret.o -c ./src/uret.c
	gcc -I./include/ -o ./lib/Auret.o -c ./src/Auret.c
	gcc -I./include/ -o ./lib/Buret.o -c ./src/Buret.c
	gcc -I./include/ -o ./lib/Oyun.o -c ./src/Oyun.c
	


	
	gcc -I./include/ -o ./bin/test ./src/test.c ./lib/Taktik.o ./lib/Btaktik.o ./lib/uret.o ./lib/Buret.o ./lib/Auret.o ./lib/Oyun.o ./lib/Ataktik.o ./lib/Koloni.o



run:
	./bin/test
