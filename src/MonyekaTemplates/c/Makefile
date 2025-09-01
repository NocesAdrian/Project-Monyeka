CXX := gcc
FLAGS := -Wall -Wextra -g

SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c, build/%.o, $(SRC))

all: bin/program
	./bin/program

bin/program: $(OBJ)
	$(CXX) $(FLAGS) $^ -o $@

build/%.o: src/%.c
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -r build/* bin/*
