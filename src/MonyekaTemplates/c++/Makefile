CXX := g++
FLAGS := -Wall -Wextra -g

SRC = $(wildcard src/*.cpp)
OBJ = $(patsubst src/%.cpp, build/%.o, $(SRC))

all: bin/program
	./bin/program

bin/program: $(OBJ)
	$(CXX) $(FLAGS) $^ -o $@

build/%.o: src/%.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -r build/* bin/*
