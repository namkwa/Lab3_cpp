CC = g++
CFLAGS = -Wall -g

utility: audio.o publication.o
	$(CC) $(CFLAGS) -o audio audio.o publication.o

audio.o: audio.cpp publication.h
	$(CC) $(CFLAGS) -c audio.cpp

publication.o: publication.h

clean: ; rm *.o *.exe *.gch