all: main

main: main.o
	g++ -g main.o helper.o -o Prog3Bottcher_dbottch1.exe

main.o: main.cpp helper.cpp helper.h
	g++ -c main.cpp helper.cpp

clean:
	rm -f *.o Prog3Bottcher_dbottch1.exe
