all:Main

CC=g++
CPPFLAGS=-Wall -std=c++11 -ggdb
LDFLAGS=-pthread

Main:Main.o
	$(CC) $(LDFLAGS) -o $@ $^

Main.o:Main.cpp
	$(CC) $(CPPFLAGS) -o $@ -c $^

.PHONY:
	clean
clean:
	rm Main.o Main
