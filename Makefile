CC=g++
FLAGS=-Wall -std=c++11
SOURCES=$(wildcard *.cpp) $(wildcard */*.cpp)
OBJECTS=$(subst cpp,o,$(SOURCES))

main : $(OBJECTS)
	$(CC) $(FLAGS) -o $@ $^

%.o : %.cpp %.h
	$(CC) -o $@ -c $<


clean :
	rm -f *~ *.o main