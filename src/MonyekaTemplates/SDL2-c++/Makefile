CXX := g++
FLAGS := -Wall -Wextra -g
SDL2 := $(shell sdl2-config --cflags --libs)

SRC = $(wildcard src/*.cpp)
OBJ = $(patsubst src/%.cpp, build/%.o, $(SRC))

all: bin/program
	./bin/program

bin/program: $(OBJ)
	$(CXX) $(FLAGS) $^ -o $@ $(SDL2)

build/%.o: src/%.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -r build/* bin/*
