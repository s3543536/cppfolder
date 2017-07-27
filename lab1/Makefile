SOURCES=*.cpp
OBJECTS=*.o
HEADERS=*.h
PROGRAM=a.out
FLAGS=-Wall -pedantic -std=c++14

all: $(PROGRAM)

%.o: %.c $(HEADERS)
	g++ $(FLAGS) -c $< -o $@

$(PROGRAM): $(OBJECTS)
	g++ -o $@ $^

.PHONY:clean archive

clean:
	rm $(PROGRAM) $(OBJECTS)

archive:
	zip $(USER)-a2 $(SOURCES) $(HEADERS) Makefile

