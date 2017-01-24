OBJECTS = main.o Influence.o
EXEC = main
CXXFLAGS = -std=c++11 -Wall
LDFLAGS =
CXX = g++

all: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJECTS)

clean:
	rm *.o
